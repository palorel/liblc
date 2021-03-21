#include <stddef.h>

char		*lc_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == c)
            return ((char *)s);
        ++s;
    }
    return (NULL);
}