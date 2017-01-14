
extern zend_class_entry *app_version_ce;

ZEPHIR_INIT_CLASS(App_Version);

PHP_METHOD(App_Version, getVersion);

ZEPHIR_INIT_FUNCS(app_version_method_entry) {
	PHP_ME(App_Version, getVersion, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
