/* ************************************************************************** */
/* created by:    palorel                                                     */
/* created date:  00-00-0000                                                  */
/* contacts:      mail@main.ru                                                */
/* ************************************************************************** */

#include <lc_list.h>
#include <stdlib.h>

void	*lc_list_pop_back(t_list *list)
{
    void *data = NULL;
    t_list_item *walker = NULL;

    if (!list || !list->tail)
        return NULL;
    walker = list->tail;
    if (list->size == 1)
        list->head = NULL;
    list->tail = list->tail->prev;
    data = walker->data;
    --list->size;
    return(data);
}