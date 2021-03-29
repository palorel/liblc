/* ************************************************************************** */
/* created by:    palorel                                                     */
/* created date:  00-00-0000                                                  */
/* contacts:      mail@main.ru                                                */
/* ************************************************************************** */

#include <lc_ctype.h>

int		lc_isxdigit(int c)
{
    return (lc_isdigit(c) ||
			('A' <= c && c <= 'F') ||
			('a' <= c && c <= 'f'));
}