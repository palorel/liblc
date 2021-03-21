int		lc_isspace(int c)
{
    return ((c >= '\t' && c <= '\r') || c == ' ');
}