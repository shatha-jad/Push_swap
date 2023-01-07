/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 21:01:58 by sjadalla          #+#    #+#             */
/*   Updated: 2023/01/07 19:06:13 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "get_next_line/get_next_line.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>

typedef struct node {
	int			data;
	int			index;
	struct node	*next;
}t_stack;

typedef struct nodes {
	t_stack	**top_a;
	t_stack	**top_b;
	int		stack_size_a;
	int		stack_size;
	int		stack_size_b;
	int		chunk_size;
	int		chunk_elem_size;
	int		*array;
	int		*array_b;
	int		*index_a;
	int		*index_b;
	int		max_b;
	int		min_b;
	char	**split;
	char	*args;
}t_all;

# define STACK_A	1
# define STACK_B	2
# define CHUNK_SIZE	3
# define STACK_SIZE 4
# define ARRAY      5

// Parsing
t_stack	*add_at_end(t_stack *top_a, int content);
void	error_msg(int i);
void	reset_index(t_stack *top_a);
int		check_sort(t_stack *top_a);
int		check_size(t_stack *top_a);
void	initial_check_stack(t_all *all);

// Error handling
int		ft_atoi( char *str, t_all *all, t_stack *top);
void	check_dup(t_stack *str, t_all *all);
char	**ft_split(char const *s, char c);
int		count_chars(char const *s, char c);
int		count_words(char const *s, char c);

// Operations
void	swap_a_b(t_stack *top_a);
void	ss(t_stack **top_a, t_stack **top_b);
void	push_a_b(t_stack **list, t_stack **node);
void	rotate_a_b(t_stack **top_a);
void	rr(t_stack **top_a, t_stack **top_b);
void	revrotate_a_b(t_stack **top_a);
void	rrr(t_stack **top_a, t_stack **top_b);

// Sort "hard coding"
void	sort_lessthan_5(t_all *all, char s);
void	sort_2(t_stack **top_a, char s);
void	sort_3(t_stack **top_a, char s);
void	sort_4(t_all *all, char s);
void	sort_5(t_all *all, char s);
void	selectionsort(int arr[], int n);

// Sorting
void	insert(t_stack **top_a, t_stack **top_b, int num);
void	sort_all(t_all *all);

// sorting utils
int		smallest(int size, t_stack *top_a);
int		largest(int size, t_stack *top_a);
int		largest_index(int size, t_stack *top_a);
int		stack_median(t_stack *stack, int size, char c);
int		stack_medians(t_stack *stack);
int		lessthan_median(t_stack *stack, int median);
int		stack_mean(t_stack *stack);
void	sort_b(t_stack **top_b, int median_b);
t_stack	*bubbleSort(t_stack **head, int count);
t_stack	*swap(t_stack *ptr1, t_stack *ptr2);
t_stack	*largest_5(t_stack **head);
void	ft_print(t_all *all, int flag);

// free
void	frees(t_all *all);
void	ft_free(char **tab);
void	free_stack(t_stack	*top);
void	free_error_stack(t_stack *stack, t_all *all, int i);
void	free_error_pars(char **split);

// parsing utils
void	*ft_memset(void *b, int c, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strsjoin(int ac, char **av, char *sep);
int		ft_strlens(int ac, char **av, char *sep);
size_t	ft_strlen(const char *str);

#endif