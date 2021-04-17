/* ************************************************************************** */
/* created by:    palorel                                                     */
/* created date:  00-00-0000                                                  */
/* contacts:      mail@main.ru                                                */
/* ************************************************************************** */

#include <stdlib.h>
#include <lc_list.h>

t_list	*lc_list_new(void)
{
    t_list *temp = malloc(sizeof(t_list));
    
	if (temp)
	{
		temp->head = NULL;
        temp->tail = NULL;
        temp->size = 0;
	}
	return (temp);
}
