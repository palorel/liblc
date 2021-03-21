#include "liblc.h"
#include <stdio.h>

typedef struct				s_list
{
    void					*data;
    struct s_lin_sin_list	*next;
}							t_list;

t_list *lc_new(void *data)
{
	t_list *temp = malloc(sizeof(t_list));

	temp->data = data;
}

void lc_push_front(t_list **head, void *data);
void lc_push_back(t_list **head, void *data);
void lc_pop_front(t_list **head, void *data);
void lc_pop_back(t_list **head, void *data);
size_t lc_size(t_list *head);
t_list *lc_last(t_list *head);

int main(int argc, char **argv)
{
	t_list *head;

	printf("%d\n", gcd(110, 3070));
    /*for (int i = 0; i < 128; ++i)
    {
        printf("%d %d\n", i , iscntrl(i));
    }*/
    return 0;
}
