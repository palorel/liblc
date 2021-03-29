/* ************************************************************************** */
/* created by:    palorel                                                     */
/* created date:  00-00-0000                                                  */
/* contacts:      mail@main.ru                                                */
/* ************************************************************************** */

#include <lc_ctype.h>

int lc_ispunct(int c)
{
    return (lc_isprint(c) && !lc_isalnum(c));
}