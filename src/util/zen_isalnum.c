// zen_isalnum.c
// Checks for alphanumeric characters: alphabetic ('A' to 'Z' and 'a' to 'z') and digit ('0' to '9').
// Returns non-zero if c is an alphanumeric character, zero otherwise.
// Part of libzen, a utility library.

int zen_isalpha(int);
int zen_isdigit(int);

int zen_isalnum(int c)
{
    return ( zen_isalpha(c) || zen_isdigit(c) );
}
