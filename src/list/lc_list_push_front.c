/* ************************************************************************** */
/* created by:    palorel                                                     */
/* created date:  00-00-0000                                                  */
/* contacts:      mail@main.ru                                                */
/* ************************************************************************** */

#include <lc_list.h>
#include <stdlib.h>

void	lc_list_push_front(t_list *list, void *data)
{
	if (!list)
		return ;
    t_list *temp = lc_list_item_new(data);
    if (temp)
	{
        temp->next = list->head;
        if (list->head)
            list->head->prev = temp;
        else
            list->tail = temp;
        list->head = temp;
        ++list->size;
	}
}