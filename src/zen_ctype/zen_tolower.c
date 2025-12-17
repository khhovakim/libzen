// zen_tolower.c
// Converts an uppercase letter to its lowercase equivalent.
// If the character is not an uppercase letter, it is returned unchanged.
//
// Part of libzen, a utility library.

// 'A' -> 65
// 'Z' -> 90
// 'a' -> 97
// 'z' -> 122

#include "zen_ctype.h"  // for zen_isupper

int zen_tolower(int c)
{
    return ( zen_isupper(c) ? c + ('a' - 'A') : c );
}