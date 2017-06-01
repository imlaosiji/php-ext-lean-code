

// 定义 扩展相关的宏 比如版本号 扩展名称等等。。
#define PHP_LAOSIJI_EXTNAME "laosiji"
#define PHP_LAOSIJI_VERSION "1.0.0"

//加载config.h，如果配置了的话
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

// 加载php头文件
// 这个 很有必要哈
#include "php.h"
