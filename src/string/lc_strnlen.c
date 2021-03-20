#include <stddef.h>

size_t		lc_strnlen(const char *s, size_t maxlen)
{
    size_t l = 0;

    while (*s && maxlen > l)
    {
        ++l;
        ++s;
    }
    return (l);
}