// libzen: zen_strstr.c - locate a substring in a string
// Returns a pointer to the first occurrence of little in big.
// Returns NULL if little is not found in big.
// Part of libzen library

#include "zen_string.h"  // for zen_strnstr, zen_strlen

char *zen_strstr(const char *big, const char *little)
{
    return zen_strnstr( big, little, zen_strlen( big ) );
}
