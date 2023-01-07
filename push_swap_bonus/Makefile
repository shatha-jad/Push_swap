# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 19:04:40 by sjadalla          #+#    #+#              #
#    Updated: 2023/01/07 21:01:31 by sjadalla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME        := push_swap_bonus
CC        := gcc
CFLAGS    := -Wall -Wextra -Werror -g3
RM      = rm -f

SRCS        :=      checker.c \
                          free_errors.c \
                          ft_atoi.c \
                          ft_split.c \
                          get_next_line/get_next_line.c \
                          get_next_line/get_next_line_utils.c \
                          initial_check_stack.c \
                          parsing.c \
                          parsing_utils.c \
                          parsing_utils2.c \
                          push_a_b.c \
                          revrotate_a_b.c \
                          rotate_a_b.c \
                          selection_sort.c \
                          sort_lessthan_5.c \
                          sort_utils.c \
                          ss_rr_rrr.c \
                          swap_a.c \
                          
OBJS        := $(SRCS:.c=.o)

$(NAME):    $(OBJS)
			gcc $(CFLAGS) $(OBJS) -o $(NAME)

all:        $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
