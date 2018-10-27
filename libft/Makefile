# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/02/05 17:42:43 by togibour     #+#   ##    ##    #+#        #
#    Updated: 2018/02/05 18:20:01 by togibour    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC = $(shell ls | grep -E "ft_") \
	   get_next_line.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): 
	gcc $(CFLAGS) -c $(SRC) -I includes
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean
