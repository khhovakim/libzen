// zen_isalpha.c
// Checks for alphabetic characters: 'A' to 'Z' and 'a' to 'z'.
// Returns non-zero if c is an alphabetic character, zero otherwise.
// Part of libzen, a utility library.

int zen_isalpha(int c)
{
    return ( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') );
}
