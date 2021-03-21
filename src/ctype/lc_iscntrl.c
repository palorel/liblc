int lc_iscntrl(int c)
{
    return((0 <= c && c <= 31) || c == 127);
}