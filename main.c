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

t_list *lc_last(t_list *head)
{
    t_list *last = NULL;

	while (head)
    {
        last = head;
        head = head->next;  
    }
    return (last);
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
    t_list *last = NULL;
	t_list *temp = NULL;

	if (!head)
		return ;

	if ((temp = lc_new(data)))
    {
		last = lc_last(*head);
    	if (last)
			last->next = temp;
		else
			*head = temp;
    }
}

void *lc_pop_front(t_list **head)
{
    if (!head || !*head)
        return NULL;
	t_list *last = NULL;
    t_list *walker = NULL;
    void *data = NULL;

    last = lc_last(*head);
    if (last)
        return NULL;
    walker = *head;
    *head = (*head)->next;
    data = walker->data;
    free(walker);
    return (data);
}

void *lc_pop_back(t_list **head)
{
	if (!head || !*head)
		return (NULL);

    t_list *last = NULL;
    t_list *walker = *head;
    void *data = NULL;

	while (walker->next)
	{
		last = walker;
		walker = walker->next;
	}
	if (last)
		last->next = NULL;
	else
		*head = NULL;
    data = walker->data;
    free(walker);
    return (data);
}

size_t lc_size(t_list *head)
{
    size_t number = 0;

	while (head)
    {
        head = head->next;
        ++number;
    }
    return (number);
}

void lc_free(t_list **head, void (*free_func)(void *))
{
    t_list *walker = NULL;

    if (!head)
		return ;
    while (walker)
    {
		if (free_func)
			free_func((*head)->data);
        walker = *head;
		*head = (*head)->next;
        free(walker);
    }
	*head = NULL;
}

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
    int k = 0;
    int d = 0;
	/*
	
	size_t size = 5;
	int *arr = malloc(size * sizeof(int));
	t_list *head = NULL;

	for (int i = 0; i < size; ++i)
	{
		arr[i] = rand() % 100;
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	lc_push_back(&head, arr + 0); // 83

	lc_push_front(&head, arr + 1); // 86
	lc_push_front(&head, arr + 2); // 77
	lc_push_front(&head, arr + 3); // 15
	
	lc_push_back(&head, arr + 4); // 93

	// lc_foreach(head, lc_list_fill_rand);

	printf("%20p\n\n", head);
	print_list(head);
	
	*/

    // lc_foreach(head, lc_print_int);

	// void (*action)(t_list**, void*);
	// action = &lc_push_back;
	// action = &lc_push_front;
	// action(&head, NULL);



    /*int rows = 0;
    int cols = 0;
    int **matrix;
    int k = 1;
    int r = 1;
    int l = 0;
    int z = 3;

    scanf("%d", &rows);
    scanf("%d", &cols);
    
	matrix = (int**)malloc(rows * sizeof(int*));
	for (int i = 0; i < rows; ++i)
    {
        matrix[i] = (int*)malloc(cols * sizeof(int));
		for (int j = 0; j < cols; ++j)
        {
        }
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }*/

	
	FILE *fp = fopen("main.c", "r");

	if (!fp)
		return (0);

	//fopen();
	//fclose();

	//feof();
	//fread();
	//fwrite();

	//fseek();

	//fgetc();
	//fputc();

	//fgets();
	//fputs();

	//fscanf();
	//fprintf();

	while (!feof(fp))
	{
		if (fgetc(fp) == ' ')
            ++k;
        if ('0'<= fgetc(fp) && fgetc(fp) <= '9')
            ++d;

	}
	fclose(fp);
    ++k;
    printf("%d\n", k);
    printf("%d", d);
    return (0);
}
//кол-во слов кол-во чисел