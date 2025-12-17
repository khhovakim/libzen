// zen_strlcpy.c - size-bounded string copying
// Copies up to size - 1 characters from the string src to dest, null-terminating the result if size is not 0.
// Returns the total length of the string it tried to create, that is, the length of src.
// If the return value is >= size, truncation occurred.
//
// Part of libzen library

#include <stddef.h>  // for size_t

#include "zen_string.h"  // for zen_strlen

size_t zen_strlcpy(char *dest, const char *src, size_t size)
{
    size_t src_len = zen_strlen( src );
    if ( size == 0ul ) {
        return src_len;
    }

    size_t i = 0ul;
    size_t copy_len = ( src_len >= size ) ? size - 1ul : src_len;
    while ( i < copy_len ) {
        dest[i] = src[i];
        ++i;
    }
    dest[i] = '\0';

    return src_len;
}