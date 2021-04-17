#ifndef LC_LIST_H
#define LC_LIST_H

#include <stddef.h>

typedef struct 			s_list_item
{
    void				*data;
    struct s_list_item	*next;
    struct s_list_item	*prev;
}						t_list_item;

typedef struct			s_list
{
    t_list_item			*head;
    t_list_item			*tail;
	size_t				size;
}						t_list;

t_list_item				*lc_list_item_new(void *data);//
t_list 					*lc_list_new(void);//
void                    lc_list_push_front(t_list *list, void *data);//
void                    lc_list_push_back(t_list *list, void *data);//
void                    lc_list_insert_at(t_list *list, size_t pos, void *data);
void                    *lc_list_pop_front(t_list *list);
void                    *lc_list_pop_back(t_list *list);
void                    lc_list_free(t_list *list, void (*f)(void*));//
void                    lc_list_del_at(t_list *list, size_t pos, void (*f)(void));//
void                    lc_list_for_each(t_list *list, void (*f)(void));


#endif
