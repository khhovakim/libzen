// zen_strcmp.c - compares two strings
// Returns 0 if they are equal, <0 if s1 < s2, >0 if s1 > s2.
//
// Part of libzen library

#include "zen_string.h"  // for zen_strncmp, zen_strlen

int zen_strcmp(const char *s1, const char *s2)
{
    return zen_strncmp( s1, s2, zen_strlen( s1 ) + 1ul );;
}
