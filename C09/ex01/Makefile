# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 18:22:37 by bolee             #+#    #+#              #
#    Updated: 2022/01/22 16:53:33 by bolee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LB		=	ar
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
CFILES	=	srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	=	$(CFILES:.c=.o)
INCLUDE	=	-I./includes
TARGET	=	libft.a

%.o: %.c
	$(CC) $(INCLUDE) $(CFLAGS) -c $< -o $@

all: $(TARGET)

$(TARGET): $(OBJS)
	$(LB) -rcsuv $@ $(OBJS)
	ranlib $@
 
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
