/* ************************************************************************** */
/* created by:    palorel                                                     */
/* created date:  00-00-0000                                                  */
/* contacts:      mail@main.ru                                                */
/* ************************************************************************** */

#include <stdlib.h>
#include <lc_list.h>

void	lc_list_free(t_list *list, void (*f)(void*))
{
    t_list_item *walker = NULL;

    if (!list || !list->head)
		return ;
	walker = list->head;
    while (walker)
    {
		if (f)
			f((list->head)->data);
        walker = list->head;
        list->head->prev = NULL;
		list->head = (list->head)->next;
        free(walker);
    }
	list->head = NULL;
	list->tail = NULL;
	list->size = 0;
}
