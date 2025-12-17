// zen_toupper.c
// Converts a lowercase letter to its uppercase equivalent.
// If the character is not a lowercase letter, it is returned unchanged.
//
// Part of libzen, a utility library.

// 'A' -> 65
// 'Z' -> 90
// 'a' -> 97
// 'z' -> 122

#include "zen_ctype.h"  // for zen_islower

int zen_toupper(int c)
{
    return ( zen_islower(c) ? c - ('a' - 'A') : c );
}