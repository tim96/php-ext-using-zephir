
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(App_Version) {

	ZEPHIR_REGISTER_CLASS(App, Version, app, version, app_version_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(App_Version, getVersion) {

	ZEPHIR_INIT_THIS();


	RETURN_STRING("0.0.1 super beta");

}

