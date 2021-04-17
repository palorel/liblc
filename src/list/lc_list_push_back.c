/* ************************************************************************** */
/* created by:    palorel                                                     */
/* created date:  00-00-0000                                                  */
/* contacts:      mail@main.ru                                                */
/* ************************************************************************** */

#include <lc_list.h>
#include <stdlib.h>

void	lc_list_push_back(t_list *list, void *data)
{
    if (!list)
		return ;
    t_list *temp = lc_list_item_new(data);
    if (temp)
    {
		temp->prev = list->tail;
        if (list->tail)
            list->tail->next = temp;
        else
            list->head = temp;
		list->tail = temp;
        ++list->size;
    }
}