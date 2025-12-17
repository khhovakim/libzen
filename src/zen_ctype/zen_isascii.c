// zen_isascii.c
// Checks whether c is a 7-bit unsigned char that fits into the ASCII character set.
// Returns non-zero if c is an ASCII character, zero otherwise.
//
// Part of libzen, a utility library.

int zen_isascii(int c)
{
    return ( c >= 0 && c <= 127 );
}
