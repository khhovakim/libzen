// zen_toupper.c
// Converts a lowercase letter to its uppercase equivalent.
// If the character is not a lowercase letter, it is returned unchanged.
// Part of libzen, a utility library.

// 'A' -> 65
// 'Z' -> 90
// 'a' -> 97
// 'z' -> 122

int zen_islower(int);

int zen_toupper(int c)
{
    if ( zen_islower(c) )
        return c - ('a' - 'A');
    return c;
}