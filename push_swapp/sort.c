# include "push_swap.h"

void sort(t_stack **top_a, t_stack **top_b)
{
	int	index;
	int	num;

	index = 0;
	num = 3;
	while (top_a)
	{
		if ((*top_a)->index <= index && index > 1)
		{
			push_a_b(top_b, top_a, 'b');
			rotate_a_b(top_b, 'b');
			index++;
		}
		if ((*top_a)->index <= index + num)
			{
				push_a_b(top_b, top_a, 'a');
				index++;
			}
		if ((*top_a)->index >= index)
			rotate_a_b(top_a, 'a');
	}
}

// void	sort1(t_stack **top_a, t_stack **top_b)
// {
// 	int	max;

// 	max = largest(check_size(top_a), top_b);
// 	while (top_b)
// 	{
// 		if ((*top_b)->data == max)

// 	}
	
// }



// void sort_100(t_stack **top_a, t_stack **top_b)
// {}