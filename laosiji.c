#include "php_laosiji.h"

// functions entry 函数模块
static zend_function_entry laosiji_functions[] = {
    ZEND_FE(laosiji_hello, NULL) // 声明
    {NULL, NULL, NULL}           // 固定不变的 照着写就行了
};

// module entry
zend_module_entry laosiji_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
    STANDARD_MODULE_HEADER,
#endif
    PHP_LAOSIJI_EXTNAME, /* 扩展名称 */
    laosiji_functions,   /* Functions 载入函数模块*/
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

// 函数定义
ZEND_FUNCTION(laosiji_hello)
{
    php_printf("hello laosiji!\n");
}
