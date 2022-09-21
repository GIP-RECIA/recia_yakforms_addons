CONF_FILE = .makerc
APP_NAME = recia_yakforms_addons

ifeq ($(strip $(word 1,$(MAKECMDGOALS))),configure)
	CONF_PATH = $(word 2,$(MAKECMDGOALS))
	CONF_OWNER = $(word 3,$(MAKECMDGOALS))
else
	-include $(CONF_FILE)
endif


all: .makerc title configuration_report sudo_warning module_reciaforms theme_yaktheme_reciaforms

module_reciaforms: .makerc title configuration_report sudo_warning
	@echo "### RECIAFORMS MODULE INSTALLATION/UPDATE ###"
	@echo "Files copy..."
ifneq ($(strip $(CONF_OWNER)),)
	rsync -auv --progress --chown $(CONF_OWNER) ./modules/reciaforms $(CONF_PATH)sites/all/modules/
else
	rsync -auv --progress ./modules/reciaforms $(CONF_PATH)sites/all/modules/
endif

module_esco: .makerc title configuration_report sudo_warning
	@echo "### RECIAFORMS MODULE INSTALLATION/UPDATE ###"
	@echo "Files copy..."
ifneq ($(strip $(CONF_OWNER)),)
	rsync -auv --progress --chown $(CONF_OWNER) ./modules/esco_prolongation $(CONF_PATH)sites/all/modules/
else
	rsync -auv --progress ./modules/esco_prolongation $(CONF_PATH)sites/all/modules/
endif

theme_yaktheme_reciaforms: .makerc title configuration_report sudo_warning
	@echo "### YAKTEHE_RECIAFORMS THEME INSTALLATION/UPDATE ###"
	@echo "Files copy..."
ifneq ($(strip $(CONF_OWNER)),)
	rsync -auv --progress --chown $(CONF_OWNER) ./themes/yaktheme_reciaforms $(CONF_PATH)sites/all/themes/
else
	rsync -auv --progress ./themes/yaktheme_reciaforms $(CONF_PATH)sites/all/themes/
endif



###### TOOLS
configure : 
	@echo "### SCRIPT CONFIGURATION ###"
ifeq ($(strip $(CONF_PATH)),)
	@echo "ERROR : path must be defined"
	@exit
else
	@echo "INSTALLATION PATH : $(CONF_PATH)"
endif
ifneq ($(strip $(CONF_OWNER)),)
	@echo "FILES OWNER : $(CONF_OWNER)"
endif
	@echo "writing configuration file \".makerc\" ..."
	@echo "export CONF_PATH = $(CONF_PATH)\nexport CONF_OWNER = $(CONF_OWNER)" > .makerc

title:
	@echo "############ $(APP_NAME) INSTALLATION SCRIPT ############"
	@echo ""
	@echo ""

configuration_report:
	@echo "### CONIGURATION (.makerc) ###"
	@echo "INSTALLATION PATH : $(CONF_PATH)"
	@echo "FILES OWNER : $(CONF_OWNER)"

sudo_warning:
ifneq ($(strip $(CONF_OWNER)),)
ifneq ($(shell id -u),0)
	@echo ""	
	@echo "!!! ERROR : You must use sudo to run this script with a specific owner !!!"
	@echo ""
	@false
endif
endif	

$(CONF_FILE):
	@echo "Script id not configured !!!"
	@echo "To configure the installation script run \"make configure [path] [owner]\""
	@echo "Where :"
	@echo "[path] : required : path to the yakforms installation folder ending with /, ex: /var/www/yakforms/"
	@echo "[owner] : optional : owner (uid:guid) of the installation dir, ex: www-data:www-data"
	@false
