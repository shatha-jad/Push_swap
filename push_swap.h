/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 21:01:58 by sjadalla          #+#    #+#             */
/*   Updated: 2022/07/17 17:41:03 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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
	int		stack_size;
	int		chunk_size;
	int		*array;
}t_all;

#define STACK_A		1
#define	STACK_B		2
#define	CHUNK_SIZE	3
#define	STACK_SIZE	4
#define	ARRAY		5
// typedef struct stack {
// 	int s_data;
// 	struct stack *next;
// } s_stack;
// struct btreenode
// {
//     struct btreenode *leftchild ;
//     int data ;
//     struct btreenode *rightchild ;
// } ;

// void insert ( struct btreenode **sr, int num );
// void inorder ( struct btreenode *sr );
// Parsing
// void	add_at_end(t_stack **top_a, int content);
t_stack	*add_at_end(t_stack *top_a, int content);
void	error_msg(int i);
void	reset_index(t_stack *top_a);
// t_stack	check_character_multi_empty(t_stack	*arg);
// void	check_character_multi_empty(t_stack	*arg);
// void push_swap(t_stack **top_a, int content);
// void stack_b(t_stack **top_b, t_stack *top_a);
int		check_sort(t_stack *top_a);
int		check_size(t_stack *top_a);
void initial_check_stack (t_stack *top_a, t_stack *top_b, char **split, char *args);
// void	check_size(t_stack	*arg);

// Error handling
// int		ft_atoi(char *arg);
int		ft_atoi( char *str,char **split, t_stack *top, char *args);
void	check_dup(t_stack *str, char **split, char *args);
char	**ft_split(char const *s, char c);
int		count_chars(char const *s, char c);
int		count_words(char const *s, char c);
// char	*ft_strstr(int *str, int *to_find, int k);

// Operations
void	swap_a_b(t_stack *top_a, char s);
void	ss(t_stack **top_a, t_stack **top_b);
// t_stack	*push_a_b(t_stack *top_a, t_stack *top_b, char s);
void	push_a_b(t_stack **list, t_stack **node, char s);
// t_stack	*push_a_b(t_stack *top_a, int b, char s);
void	rotate_a_b(t_stack **top_a, char r);
// t_stack	*rotate_a_b(t_stack *top_a, char r);
void	rr(t_stack **top_a, t_stack **top_b);
void	revrotate_a_b(t_stack **top_a, char s);
void	rrr(t_stack **top_a, t_stack **top_b);

// Swap "hard coding"
void sort_lessthan_5(t_stack **top_a, t_stack **top_b, char s);
void sort_2(t_stack **top_a, char s);
void sort_3(t_stack **top_a, char s);
void sort_4(t_stack **top_a, t_stack **top_b, char s);
void sort_5(t_stack **top_a, t_stack **top_b, char s);

// Sorting
void sort(t_stack **top_a, t_stack **top_b);
void insert	(t_stack **top_a, t_stack **top_b, int num);
void sort_100(t_stack **top_a, t_stack **top_b);

// sorting utils
int	smallest(int size, t_stack *top_a);
int	largest(int size, t_stack *top_a);
int stack_median(t_stack *stack, int size, char c);
int stack_medians(t_stack *stack);
int lessthan_median (t_stack *stack, int median);
int stack_mean(t_stack *stack);
void sort_b( t_stack **top_b, int median_b);
t_stack* bubbleSort(t_stack** head, int count);
t_stack* swap(t_stack* ptr1, t_stack* ptr2);
t_stack* largest_5(t_stack **head);

// free
void	ft_free(char **tab);
void	free_stack(t_stack	*top);
void free_error_stack(t_stack *stack, char **split, char *args, int i);
void	free_error_pars(char **split);

// parsing utils
void	*ft_memset(void *b, int c, size_t len);
void	*ft_calloc(size_t count, size_t size);
// char	*ft_strjoin(char *s1, char *s2);
char    *ft_strsjoin(int ac, char **av, char *sep);
int ft_strlens(int ac, char **av, char *sep);
size_t	ft_strlen(const char *str);
#endif