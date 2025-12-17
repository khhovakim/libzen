#include <stddef.h>  // for NULL

char *zen_strchr(const char *s, int c)
{
    unsigned char *us = (unsigned char *)s;
    if ( us == NULL ) {
        return NULL;
    }

    unsigned char uc = (unsigned char)c;
    while ( *us != '\0' && *us != uc ) {
        ++us;
    }
    return ( *us == uc ) ? (char *)us : NULL;
}