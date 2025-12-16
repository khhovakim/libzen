// zen_isprint.c
// Checks for any printable character including space.
// Returns non-zero if c is a printable character, zero otherwise.
// Part of libzen, a utility library.

int zen_isprint(int c)
{
    return ( c >= 32 && c <= 126 );
}
