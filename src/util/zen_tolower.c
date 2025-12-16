// zen_tolower.c
// Converts an uppercase letter to its lowercase equivalent.
// If the character is not an uppercase letter, it is returned unchanged.
// Part of libzen, a utility library.

// 'A' -> 65
// 'Z' -> 90
// 'a' -> 97
// 'z' -> 122

int zen_isupper(int);

int zen_tolower(int c)
{
    if ( zen_isupper(c) )
        return c + ('a' - 'A');
    return c;
}