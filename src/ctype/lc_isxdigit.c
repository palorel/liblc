int		lc_isxdigit(int c)
{
    return (('0' <= c && c <= '9') || ('A' <= c && c <= 'F'));
}