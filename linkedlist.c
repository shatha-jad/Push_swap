#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
	int data;
	int			index;
	struct stack *next;
	
} t_stack;

void lst_add(t_stack **data, int num)
{
	t_stack *new;
	t_stack *tmp;
	int i = 0;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return ;
	new->data = num;
	new->next = NULL;
	if (!(*data))
		*data = new;
	else
	{
		tmp = *data;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
}

int main(int ac, char **av)
{
	t_stack *lst = NULL;
	int i = 1;
	while (i < ac)
	{
		lst_add(&lst, atoi(av[i]));
		i++;
	}
	while (lst)
	{
		printf("%d\n", lst->data);
		lst = lst->next;
	}
}