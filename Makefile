# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/14 16:21:12 by sjadalla          #+#    #+#              #
#    Updated: 2023/01/07 21:00:21 by sjadalla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME    = push_swap
CC      = gcc
CFLAGS  = -Werror -Wall -Wextra -g3 
RM      = rm -f

SRCS	= main.c ft_atoi.c ft_split.c parsing.c sort_lessthan_5.c sort_utils.c parsing_utils.c\
			parsing_utils2.c swap_a.c push_a_b.c rotate_a_b.c revrotate_a_b.c ss_rr_rrr.c\
			initial_check_stack.c free_errors.c sort_all.c selection_sort.c

OBJS    = $(SRCS:.c=.o)

$(NAME):    $(OBJS)
			gcc $(CFLAGS) $(OBJS) -o $(NAME)

all:        $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

