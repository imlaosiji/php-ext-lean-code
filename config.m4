dnl lines starting with "dnl" are comments

dnl PHP_ARG_ENABLE 函数有三个参数
dnl 第一个参数 laosiji 扩展名称 (不用加引号)
dnl 第二个参数 运行 ./configure 脚本时显示的内容
dnl 第三个参数 调用 ./configure --help 显示的帮助信息

dnl 最后去了接下 PHP_ARG_WITH 这里就先不提了

PHP_ARG_ENABLE(
    laosiji,
    whether to enable Laosiji extension, 
    [  --enable-laosiji   Enable Laosiji Extension]
)

if test "$PHP_LAOSIJI" != "no"; then

  dnl PHP_NEW_EXTENSION 函数声明 扩展的名称、需要的源文件名、扩展的编译形式
  dnl 第一个参数 扩展的名称
  dnl 第 2 。。 n-1 个参数  需要的源文件名
  dnl 最后的$ext_shared参数用来声明这个扩展不是一个静态模块，而是在php运行时动态加载的。
  dnl 如果我们的扩展使用了多个文件，便可以将这多个文件名罗列在函数的参数里，如：
  dnl PHP_NEW_EXTENSION(laosiji, laosiji.c, laosiji_2.c, laosiji_3.c, $ext_shared)
  PHP_NEW_EXTENSION(laosiji, laosiji.c, $ext_shared)

  dnl this is boilerplate to make the extension work on OS X
  case $build_os in
  darwin1*.*.*)
    AC_MSG_CHECKING([whether to compile for recent osx architectures])
    CFLAGS="$CFLAGS -arch i386 -arch x86_64 -mmacosx-version-min=10.5"
    AC_MSG_RESULT([yes])
    ;;
  darwin*)
    AC_MSG_CHECKING([whether to compile for every osx architecture ever])
    CFLAGS="$CFLAGS -arch i386 -arch x86_64 -arch ppc -arch ppc64"
    AC_MSG_RESULT([yes])
    ;;
  esac

fi
