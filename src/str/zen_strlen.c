// zen_strlen.c - calculate the length of a string
// Returns the number of characters in the string before the null terminator.
//
// Part of libzen library

#include <stddef.h>  // for size_t

size_t zen_strlen(const char *s)
{
    size_t len = 0ul;

    while ( s[len] != '\0' ) {
        ++len;
    }
    return len;
}
