#include <stddef.h>

size_t		lc_strlen(const char *str)
{
    size_t l = 0;

    while (*str)
    {
        ++l;
        ++str;
    }
    return (l);
}