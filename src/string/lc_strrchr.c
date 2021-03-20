#include <stddef.h>

char		*lc_strrchr(const char *s, int c)
{
    char *l = 0;

    while (*s)
    {
        if (*s == c)
            l = s;
        ++s;
    }   
    return (l);
}