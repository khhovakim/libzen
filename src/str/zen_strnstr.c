// libzen: zen_strnstr.c - locate a substring in a string with length limit
// Returns a pointer to the first occurrence of little in big
// where not more than len characters are searched.
// Returns NULL if little is not found within the first len characters of big.
//
// Part of libzen library
#include <stddef.h>  // for size_t, NULL

#include "zen_string.h"  // for zen_strlen, zen_strncmp

char *zen_strnstr(const char *big, const char *little, size_t len)
{
    if ( big == NULL || little == NULL ) {
        return NULL;
    }

    if ( !(*little) ) {
        return (char *)big;
    }

    size_t little_len = zen_strlen( little );
    size_t i = 0ul;
    while ( big[i] && i + little_len <= len ) {
        if ( zen_strncmp( &big[i], little, little_len ) == 0 ) {
            return (char *)&big[i];
        }
        ++i;
    }
    return NULL;
}
