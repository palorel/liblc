#include <stddef.h>

char		*lc_strstr(const char *str, const char *needle)
{
    int k = 0;
    int l = 0;
    char needle_2;

    needle_2 = needle;
    k = lc_strlen(needle);
    while (*str)
    {
        if (*str == *needle)
        {
            if (k == l)
                return (s);
            else
            {
                ++l;
                ++needle;
                ++str;
            }
        }
        ++str;
        needle = needle_2;
        l = 0;
    }
    return (0);
}