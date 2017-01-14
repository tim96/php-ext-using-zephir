
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#include "php_ext.h"
#include "app.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *app_version_ce;

ZEND_DECLARE_MODULE_GLOBALS(app)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(app)
{
	REGISTER_INI_ENTRIES();
	ZEPHIR_INIT(App_Version);
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(app)
{
	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_app_globals *app_globals TSRMLS_DC)
{
	app_globals->initialized = 0;

	/* Memory options */
	app_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	app_globals->active_symbol_table = NULL;

	/* Cache Enabled */
	app_globals->cache_enabled = 1;

	/* Recursive Lock */
	app_globals->recursive_lock = 0;

	/* Static cache */
	memset(app_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);


}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_app_globals *app_globals TSRMLS_DC)
{

}

static PHP_RINIT_FUNCTION(app)
{

	zend_app_globals *app_globals_ptr;
#ifdef ZTS
	tsrm_ls = ts_resource(0);
#endif
	app_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(app_globals_ptr TSRMLS_CC);
	zephir_initialize_memory(app_globals_ptr TSRMLS_CC);


	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(app)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}

static PHP_MINFO_FUNCTION(app)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_APP_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_APP_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_APP_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_APP_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_APP_ZEPVERSION);
	php_info_print_table_end();

	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(app)
{
	php_zephir_init_globals(app_globals TSRMLS_CC);
	php_zephir_init_module_globals(app_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(app)
{

}


zend_function_entry php_app_functions[] = {
ZEND_FE_END

};

zend_module_entry app_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_APP_EXTNAME,
	php_app_functions,
	PHP_MINIT(app),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(app),
#else
	NULL,
#endif
	PHP_RINIT(app),
	PHP_RSHUTDOWN(app),
	PHP_MINFO(app),
	PHP_APP_VERSION,
	ZEND_MODULE_GLOBALS(app),
	PHP_GINIT(app),
	PHP_GSHUTDOWN(app),
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_APP
ZEND_GET_MODULE(app)
#endif
