// zen_strrchr.c - locate last occurrence of character in string
// Returns a pointer to the last occurrence of c in s, or NULL if not found.
//
// Part of libzen library

#include <stddef.h>  // for NULL

char *zen_strrchr(const char *s, int c)
{
    unsigned char *us = (unsigned char *)s;
    if ( us == NULL ) {
        return NULL;
    }

    unsigned char uc = (unsigned char)c;
    unsigned char *last_occurrence = NULL;

    while ( *us ) {
        if ( *us == uc ) {
            last_occurrence = us;
        }
        ++us;
    }
    return (char *)last_occurrence;
}