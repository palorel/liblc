/* ************************************************************************** */
/* created by:    palorel                                                     */
/* created date:  00-00-0000                                                  */
/* contacts:      mail@main.ru                                                */
/* ************************************************************************** */

#include <lc_list.h>
#include <stdlib.h>

void	lc_list_insert_at(t_list *list, size_t pos, void *data)
{
    size_t pos_1 = 1;
    t_list_item *walker = NULL;

    if (pos == list->size)
    {
        lc_list_push_front(list, data);
        return ;
    }
    if (pos == 1)
    {
        lc_list_push_back(list, data);
        return ;
    }
    while (pos - 1 > pos_1)
    {
        list->head = list->head->next;
        ++pos_1;
    }
    pos_1 = list->size;
    while (pos < pos_1)
    {
        list->tail = list->tail->prev;
        --pos_1;
    }
    walker = lc_list_item_new(data);
    walker->prev = list->tail->prev;
    list->tail->prev = walker;
    walker->next = list->head->next;
    list->head->next = walker;
    ++list->size;
}