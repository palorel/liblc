#include "liblc.h"

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct		s_list
{
    void			*data;
    struct s_list	*next;
}					t_list;

t_list *lc_new(void *data)
{
	t_list *temp = malloc(sizeof(t_list));
    
	if (temp)
	{
		temp->data = data;
        temp->next = NULL;
	}
	return (temp);
}

void lc_push_front(t_list **head, void *data)
{
	if (!head)
		return ;

	t_list *temp = lc_new(data);
    
	if (temp)
	{
		temp->next = *head;
    	*head = temp;
	}
}

void lc_push_back(t_list **head, void *data)
{
    t_list *new = 0;

    while (head)
    {
        new = head;
        ++head;
    }
    t_list *temp = lc_new(data);
    head = new;

    if (temp)
    {
        temp->next = *head;
    }
}
void *lc_pop_front(t_list **head); // return pointer to data
void *lc_pop_back(t_list **head);
size_t lc_size(t_list *head);
t_list *lc_last(t_list *head);
void lc_free(t_list **head, void (*free_func)(void *));

void lc_foreach(t_list *head, void (*f)(void *))
{
    while (head)
    {
        f(head->data);
        head = head->next;
    }
}

void print_list(t_list *head)
{
	while (head)
    {
		printf("%20p\n", head);
        printf("--------------------\n");
    	printf("|%18p| -> %d\n", head->data, *(int*)head->data);
		printf("|%18p|\n", head->next);
		printf("--------------------\n");
		printf("          |         \n");
		printf("          |         \n");
		printf("          V         \n");
        head = head->next;
    }
	printf("         NULL       \n");
}

void lc_print(void *data)
{
    printf("%p\n", data);
}

void lc_print_int(void *data)
{
    printf("%d\n", (data ? *(int*)data : 0));
}

void lc_list_fill_rand(void *data)
{
	if (data)
		*(int*)data = rand() % 100;
}

int main(int argc, char **argv)
{
	t_list *head = NULL;

	lc_push_front(&head, malloc(sizeof(int)));
	lc_push_front(&head, malloc(sizeof(int)));
	lc_push_front(&head, malloc(sizeof(int)));
	
	lc_foreach(head, lc_list_fill_rand);

	printf("%20p\n\n", head);
	print_list(head);

    //lc_foreach(head, lc_print_int);

	// void (*action)(t_list**, void*);
	// action = &lc_push_back;
	// action = &lc_push_front;
	// action(&head, NULL);

    return 0;
}
