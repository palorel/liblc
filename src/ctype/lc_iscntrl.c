/* ************************************************************************** */
/* created by:    palorel                                                     */
/* created date:  00-00-0000                                                  */
/* contacts:      mail@main.ru                                                */
/* ************************************************************************** */

int lc_iscntrl(int c)
{
    return((0 <= c && c <= 31) || c == 127);
}