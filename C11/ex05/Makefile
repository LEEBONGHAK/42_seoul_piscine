# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 18:22:37 by bolee             #+#    #+#              #
#    Updated: 2022/01/24 11:12:40 by bolee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LB		=	ar
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
CFILES	=	calculator.c find_res.c  ft_putnbr.c  check_operator.c  ft_atoi.c  main.c
OBJS	=	$(CFILES:.c=.o)
INCLUDE	=	-I includes
TARGET	=	do-op

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
