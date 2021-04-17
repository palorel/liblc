/* ************************************************************************** */
/* created by:    palorel                                                     */
/* created date:  00-00-0000                                                  */
/* contacts:      mail@main.ru                                                */
/* ************************************************************************** */
#include <stdlib.h>
#include <lc_list.h>
void                    *lc_list_pop_front(t_list *list)
{
    t_list_item		*walker = list->head;
    void *data = NULL;
    if (list->tail)
        return NULL;
    walker = list->head;
    list->head = list->head->next;
    data = walker->data;
    free(walker);
    --list->size;
    return(data);
}