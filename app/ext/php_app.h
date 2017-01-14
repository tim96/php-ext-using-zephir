
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_APP_H
#define PHP_APP_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_APP_NAME        "app"
#define PHP_APP_VERSION     "0.0.1"
#define PHP_APP_EXTNAME     "app"
#define PHP_APP_AUTHOR      "tim96"
#define PHP_APP_ZEPVERSION  "0.9.6a-dev-72dbb2063e"
#define PHP_APP_DESCRIPTION "my-small-extension-for-php-using-zephir"



ZEND_BEGIN_MODULE_GLOBALS(app)

	int initialized;

	/* Memory */
	zephir_memory_entry *start_memory; /**< The first preallocated frame */
	zephir_memory_entry *end_memory; /**< The last preallocate frame */
	zephir_memory_entry *active_memory; /**< The current memory frame */

	/* Virtual Symbol Tables */
	zephir_symbol_table *active_symbol_table;

	/** Function cache */
	HashTable *fcache;

	zephir_fcall_cache_entry *scache[ZEPHIR_MAX_CACHE_SLOTS];

	/* Cache enabled */
	unsigned int cache_enabled;

	/* Max recursion control */
	unsigned int recursive_lock;

	
ZEND_END_MODULE_GLOBALS(app)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(app)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) ZEND_MODULE_GLOBALS_ACCESSOR(app, v)
#else
	#define ZEPHIR_GLOBAL(v) (app_globals.v)
#endif

#ifdef ZTS
	void ***tsrm_ls;
	#define ZEPHIR_VGLOBAL ((zend_app_globals *) (*((void ***) tsrm_get_ls_cache()))[TSRM_UNSHUFFLE_RSRC_ID(app_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(app_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def app_globals
#define zend_zephir_globals_def zend_app_globals

extern zend_module_entry app_module_entry;
#define phpext_app_ptr &app_module_entry

#endif
