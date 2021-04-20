#include "liblc.h"

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

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

int words_count(char *k)
{
    int n = 0;
    int number = 0;

	if (k)
		while (*k)
		{
			if (lc_isalnum(*k))
			{
				if (n == 0)
					++number;
				n = 1;
			}
			else
				n = 0;
			++k;
		}
    return (number);
}

int wc(void)
{
    int k = 0;
    int d = 0;
    int n = 1;

    FILE *fp = fopen("main.c", "r");

	if (!fp)
		return (0);
	while (!feof(fp))
	{
		char c = fgetc(fp);
		if (lc_isalpha(c))
        {
			k += (n == 1);
            n = 0;
        }
		else if (lc_isdigit(c))
        {
			d += (n == 1);
			n = 2;
		}
        else
        {
            n = 1;
        }
	}
	fclose(fp);
    printf("%d\n", k);
    printf("%d", d);
    return (d);
}

/*void print_list(t_list *head)
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
*/
void print(void *data)
{
    printf("%d ", *(int *)data);
}

int main(int argc, char **argv)
{
    t_list *k = NULL;
    int d = 111;
    int *n = NULL;
    int r = 100;

    n = &d;
    k = lc_list_new();
    printf("%p\n", k->head); 
    printf("%p\n", lc_list_pop_front(k));
    printf("%p\n", k->head);
    printf("%zu\n", k->size);
	lc_list_push_front(k, n);
    n = &r;
	printf("%d\n", *(int *)k->head->data);
    printf("%zu\n", k->size);
    printf("\n");
    lc_list_push_front(k, n);
    printf("%d\n", *(int *)k->head->data);
    printf("%d\n", *(int *)k->tail->data);
    lc_list_for_each(k, print);
	
	// lc_list_del_at(k, 2, )
    
    return (0);
}

void trash()
{
	int **matrix = NULL;
    int size = 0;

    scanf("%d", &size);
    
	// [a, b]

	matrix = (int **)malloc(size * sizeof(int *));
	for (int i = 0; i < size; ++i)
    {
        // matrix[i] = (int *)malloc(size * sizeof(int));
		matrix[i] = (int *)calloc(size, sizeof(int));
    }

    for (int j = 0; j < size; ++j)
    {
		matrix[j][j] = 1;
    }
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            printf("%d ", matrix[i][j]);
        }
		printf("\n");
}
    }