/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:26:30 by sjadalla          #+#    #+#             */
/*   Updated: 2022/07/17 17:54:59 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_stack *largest_5(t_stack **head)
// {
// 	t_stack *sorted;
// 	t_stack *sort_stack;
// 	t_stack *large_5;
// 	// int	size;
// 	// size = check_size(*head);
// 	sorted = bubbleSort(head,check_size(*head));
// 	while (sorted->next->next->next->next->next != NULL)
// 		sorted = sorted->next;
// 	large_5 = sorted;
// 	while (sorted != NULL)
// 	{
// 		sort_stack->data = sorted->data;
// 		sorted = sorted->next;
// 		sort_stack = sort_stack->next;
// 	}
// 	sort_stack = large_5;
// 	return (sort_stack);
// }
  
void swap(int* xp, int* yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

t_stack *largest_5(t_stack **head)
{
	int i;
	int	j;
	
	i = 0;
	
    while(i < n - 1)
	{
		j = 0; 
          while(j < n - i - 1)
		  { 
            if (arr[j] > arr[j + 1]) 
                swap(&arr[j], &arr[j + 1]);
			j++;
		  } 
	i++;
	}
}

// t_stack* swap(t_stack* ptr1, t_stack* ptr2)
// {
//     t_stack* tmp = ptr2->next;
//     ptr2->next = ptr1;
//     ptr1->next = tmp;
//     return ptr2;
// }

t_stack* bubbleSort(t_stack** head, int count)
{
    t_stack** h;
    int i, j;
	// int	swapped;
	t_stack* p1;
	t_stack* p2;
	i = 0;
    while (i <= count) 
	{
        h = head;
        // swapped = 0;
		j = 0;
        while (j < count - i - 1) 
		{
			p1 = *h;
			p2 = p1->next;
            if (p1->data > p2->data) {
                *h = swap(p1, p2);
                // swapped = 1;
            }
            h = &(*h)->next;
			j++;
        }         
		i++;
    }
	// reset_index(*head);
	return (*head);
}