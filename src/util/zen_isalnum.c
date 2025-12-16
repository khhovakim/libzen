int zen_isalpha(int);
int zen_isdigit(int);

int zen_isalnum(int c)
{
    return ( zen_isalpha(c) || zen_isdigit(c) );
}
