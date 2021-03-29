/* ************************************************************************** */
/* created by:    palorel                                                     */
/* created date:  00-00-0000                                                  */
/* contacts:      mail@main.ru                                                */
/* ************************************************************************** */

#include <lc_ctype.h>

int		lc_tolower(int c)
{
    if (lc_isupper(c))
        c += 32;
    return (c);
}