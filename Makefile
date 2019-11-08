# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qdang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/24 17:38:51 by qdang             #+#    #+#              #
#    Updated: 2019/11/07 22:47:58 by qdang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJECTS = *.o

FLAGS = -Wall -Wextra -Werror -g

$(NAME):
	@gcc $(FLAGS) -c *.c -I *.h
	@ar rc $(NAME) *.o

all: $(NAME)

clean:
	@rm -f *.o
	@rm -f libft.h.gch

fclean: clean
	@rm -f $(NAME)
	
re: fclean all
