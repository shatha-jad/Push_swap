# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/14 16:21:12 by sjadalla          #+#    #+#              #
#    Updated: 2022/06/20 18:39:19 by sjadalla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME    = push_swap
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
RM      = rm -f

SRCS	= main.c ft_atoi.c ft_split.c parsing.c sort_lessthan_5.c sort_utils.c parsing_utils.c\
			parsing_utils2.c swap_a.c push_a_b.c rotate_a_b.c revrotate_a_b.c ss_rr_rrr.c\
			initial_check_stack.c sort.c free_errors.c

OBJS    = $(SRCS:.c=.o)

$(NAME):    $(OBJS)
			gcc $(CFLAGS) $(SRCS) -o $(NAME)

all:        $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

