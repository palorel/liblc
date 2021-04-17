/* ************************************************************************** */
/* created by:    palorel                                                     */
/* created date:  00-00-0000                                                  */
/* contacts:      mail@main.ru                                                */
/* ************************************************************************** */

#include <lc_list.h>
#include <stdlib.h>

t_list_item	*lc_list_item_new(void *data)
{
	t_list_item *temp = malloc(sizeof(t_list_item));
    
	if (temp)
	{
		temp->data = data;
        temp->next = NULL;
        temp->prev = NULL;
	}
	return (temp);
} 
