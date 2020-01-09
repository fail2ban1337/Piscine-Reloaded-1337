# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelomar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/05 18:01:14 by abelomar          #+#    #+#              #
#    Updated: 2018/10/05 19:47:25 by abelomar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET=libft.a

SRCS = srcs/ft_putchar.c\
	   srcs/ft_putstr.c\
	   srcs/ft_strcmp.c\
	   srcs/ft_strlen.c\
	   srcs/ft_swap.c
INC=includes/

all: $(TARGET)

$(TARGET):object.o
	@ar rc $(TARGET) *.o

object.o:
	@gcc -c $(SRCS) -I $(INC)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(TARGET)

re:fclean all
