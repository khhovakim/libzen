// zen_strcmp.c - compares two strings
// Returns 0 if they are equal, <0 if s1 < s2, >0 if s1 > s2.
//
// Part of libzen library

#include <stddef.h>   // for NULL

int zen_strcmp(const char *s1, const char *s2)
{
    unsigned char *us1 = (unsigned char *)s1;
    unsigned char *us2 = (unsigned char *)s2;

    if ( us1 == NULL ) {
        return -( *us2 );
    }

    if ( us2 == NULL ) {
        return *us1;
    }

    while ( *us1 && ( *us1 == *us2 ) ) {
        ++us1;
        ++us2;
    }
    return ( *us1 - *us2 );
}
