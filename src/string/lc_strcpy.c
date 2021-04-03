#include <stddef.h>

char		*lc_strcpy(char *dest, const char *src)
{
    char *copy = dest;
    
    while (*src)
    {
        *dest = *src;
        ++src;
        ++dest;
    }
	*dest = 0;
    return (copy);
}