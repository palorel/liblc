/* ************************************************************************** */
/* created by:    palorel                                                     */
/* created date:  00-00-0000                                                  */
/* contacts:      mail@main.ru                                                */
/* ************************************************************************** */

#include <lc_list.h>
#include <stdlib.h>

void	lc_list_for_each(t_list *list, void (*f)(void *))
{
    size_t pos_1 = 0;

	if (!list)
		return ;
    while (pos_1 < list->size)
    {
        if (f)
            f(list->head->data);
        list->head = list->head->next;
        ++pos_1;
    }
}