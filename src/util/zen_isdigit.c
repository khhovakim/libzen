// zen_isdigit.c
// Checks for digit characters: '0' to '9'.
// Returns non-zero if c is a digit character, zero otherwise.
// Part of libzen, a utility library.

int zen_isdigit(int c)
{
    return ( c >= '0' && c <= '9' );
}
