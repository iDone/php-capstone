PHP_ARG_ENABLE(capstone, capstone,
[ --enable-capstone   Enable Capstone])

PHP_REQUIRE_CXX()
if test "$PHP_CAPSTONE" = "yes"; then
  // PHP_ADD_LIBRARY(stdc++,, CAPSTONE_SHARED_LIBADD)
  PHP_SUBST(CAPSTONE_SHARED_LIBADD)
  PHP_NEW_EXTENSION(capstone, ext.c, $ext_shared)
  PHP_ADD_LIBRARY_WITH_PATH(capstone, $ext_srcdir/capstone/build, CAPSTONE_SHARED_LIBADD)
fi
