#include "php_laosiji.h"

// module entry
zend_module_entry laosiji_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
    STANDARD_MODULE_HEADER,
#endif
    PHP_LAOSIJI_EXTNAME, /* 扩展名称 */
    NULL,                /* Functions */
    NULL,                /* MINIT */
    NULL,                /* MSHUTDOWN */
    NULL,                /* RINIT */
    NULL,                /* RSHUTDOWN */
    NULL,                /* MINFO */
#if ZEND_MODULE_API_NO >= 20010901
    PHP_LAOSIJI_VERSION, /* 扩展版本 */
#endif
    STANDARD_MODULE_PROPERTIES};

#ifdef COMPILE_DL_LAOSIJI
ZEND_GET_MODULE(laosiji)
#endif
