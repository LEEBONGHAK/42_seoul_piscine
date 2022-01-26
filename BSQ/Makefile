# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/23 12:43:44 by bolee             #+#    #+#              #
#    Updated: 2022/01/25 15:07:34 by bolee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LB		=	ar
CC		=	gcc
CFILES	=	srcs/cnt_col.c srcs/DP.c srcs/free_two_ptr.c srcs/ft_func.c srcs/ft_realloc.c srcs/get_file.c srcs/get_info.c srcs/get_map.c srcs/is_valid_file.c srcs/is_valid_info.c srcs/is_valid_map.c srcs/is_valid.c srcs/null_guards.c srcs/one_argc.c srcs/print_arr.c srcs/split.c main.c
OBJS	=	$(CFILES:.c=.o)
CFLAGS	=	-Wall -Werror -Wextra
INCLUDE	=	-I includes
TARGET	=	bsq

%.o: %.c
	$(CC) $(INCLUDE) $(CFLAGS) -c $< -o $@

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
