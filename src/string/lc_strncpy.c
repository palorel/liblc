#include <stddef.h>

char		*lc_strncpy(char *dest, const char *src, size_t n)
{
    char *copy = dest;

    while (*src && n > 0)
    {
        *dest = *src;
        ++src;
        ++dest;
        --n;
    }
	*dest = 0;
    return (copy);
}