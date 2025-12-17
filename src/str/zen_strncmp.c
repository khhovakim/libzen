// zen_strncmp.c - compares two strings up to n characters
// Returns 0 if they are equal, <0 if s1 < s2, >0 if s1 > s2.
//
// Part of libzen library

#include <stddef.h>   // for NULL

int zen_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned char *us1 = (unsigned char *)s1;
    unsigned char *us2 = (unsigned char *)s2;

    if ( us1 == NULL ) {
        return -( *us2 );
    }

    if ( us2 == NULL ) {
        return *us1;
    }

    while ( n && *us1 && ( *us1 == *us2 ) ) {
        ++us1;
        ++us2;
        --n;
    }
    return ( n ? ( *us1 - *us2 ) : 0 );
}
