// DO NOT EDIT. This file (and "version") is generated by CMake.
// Run CMake configure step to update it.
#ifndef LICENSETOOL_LICENSETOOL_INCLUDE_JSON_VERSION_H
#define LICENSETOOL_LICENSETOOL_INCLUDE_JSON_VERSION_H
#include <string>

const std::string JSONCPP_VERSION_STRING = "1.8.4";
const int JSONCPP_VERSION_MAJOR = 1;
const int JSONCPP_VERSION_MINOR = 8;
const int JSONCPP_VERSION_PATCH = 4;
# define JSONCPP_VERSION_QUALIFIER
# define JSONCPP_VERSION_HEXA ((JSONCPP_VERSION_MAJOR << 24) | \
  (JSONCPP_VERSION_MINOR << 16) | (JSONCPP_VERSION_PATCH << 8))

#ifdef JSONCPP_USING_SECURE_MEMORY
#undef JSONCPP_USING_SECURE_MEMORY
#endif
const int JSONCPP_USING_SECURE_MEMORY = 0;
// If non-zero, the library zeroes any memory that it has allocated before
// it frees its memory.

#endif // JSON_VERSION_H_INCLUDED
