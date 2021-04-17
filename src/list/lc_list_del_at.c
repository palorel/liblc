/* ************************************************************************** */
/* created by:    palorel                                                     */
/* created date:  00-00-0000                                                  */
/* contacts:      mail@main.ru                                                */
/* ************************************************************************** */

#include <stdlib.h>
#include <lc_list.h>
void                    lc_list_del_at(t_list *list, size_t pos, void (*f)(void))
{
    t_list_item		*walker = list->head;
    size_t pos_0 = 1;
    while (list->head)
    {
        if (pos_0 == pos - 1)
        {
            while (walker->next)
            {
                if (pos_0 == pos)
                    list->head->next = walker->next;            
            }
        }
        if (pos_0 == pos + 1)
        {
            while (walker->next)
            {
                if (pos_0 == pos)
                {
                    list->head->prev = walker->prev;
                    if (f)
                        f(walker->data);
                    walker->next = NULL;
                    walker->prev = NULL;
                    if (f)
                        f(walker);
                }        
            }
        }
        list->head = list->head->next;
        ++pos_0;
    }
    --list->size;
}