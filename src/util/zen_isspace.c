// zen_isspace.c
// Checks for whitespace characters: space, tab, newline, vertical tab, form feed, carriage return.
// Returns non-zero if c is a whitespace character, zero otherwise.
// Part of libzen, a utility library.

// ' '  -> 32
// '\t' -> 9
// '\n' -> 10
// '\v' -> 11
// '\f' -> 12
// '\r' -> 13

int zen_isspace(int c)
{
    return ( c == ' ' || ( (unsigned)c - '\t' < 5) );
}