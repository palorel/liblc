#include <stddef.h>

size_t lc_strlen (const char *s)
{
	int l;

	while (*s++)
		++l;
	return(l);
}
