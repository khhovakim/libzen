// zen_isupper.c - checks for uppercase ASCII characters
// Returns 1 if c is an uppercase letter (A-Z), 0 otherwise.
//
// Part of libzen library

int zen_isupper(int c)
{
    return (c >= 'A' && c <= 'Z') ? 1 : 0;
}
