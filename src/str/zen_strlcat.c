// zen_strlcat.c - size-bounded string concatenation
// Appends the string src to the end of dest, null-terminating the result and ensuring not to exceed size.
// Returns the total length of the string it tried to create,
// that is, the initial length of dest plus the length of src.
// If the return value is >= size, truncation occurred.
//
// Part of libzen library

#include <stddef.h>  // for size_t

#include "zen_string.h"  // for zen_strlen

size_t zen_strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len = zen_strlen( dest );
    size_t src_len  = zen_strlen( src  );
    if ( size <= dest_len ) {
        return size + src_len;
    }

    size_t i = 0ul;
    size_t copy_len = ( size - dest_len - 1ul > src_len )
                        ? src_len
                        : size - dest_len - 1ul;
    while ( i < copy_len ) {
        dest[dest_len + i] = src[i];
        ++i;
    }
    dest[dest_len + i] = '\0';

    return dest_len + src_len;
}
