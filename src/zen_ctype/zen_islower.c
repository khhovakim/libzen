// zen_islower.c - checks for lowercase ASCII characters
// Returns 1 if c is a lowercase letter (a-z), 0 otherwise.
//
// Part of libzen library

int zen_islower(int c)
{
    return (c >= 'a' && c <= 'z') ? 1 : 0;
}
