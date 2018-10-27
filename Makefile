# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/02/05 12:31:42 by togibour     #+#   ##    ##    #+#        #
#    Updated: 2018/02/14 12:31:52 by togibour    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME		= fdf
LIB			= libft/libft.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
MLX			= -L. minilibx_macos/libmlx.a -framework OpenGL -framework AppKit
SRCS		= srcs/main.c \
				srcs/checkfile.c \
				srcs/str_to_int_tab.c \
				srcs/draw.c \
				srcs/mlx.c \
				srcs/centering.c

all: $(NAME)

$(NAME): $(LIB) $(SRCS)
		$(CC) $(CFLAGS) -o $(NAME) $(SRCS) -L. libft/libft.a $(MLX)

$(LIB):
		make -C libft

clean:
		make -C libft clean

fclean: clean
		/bin/rm -rf $(NAME)
		make -C libft fclean

re: fclean all

.PHONY: clean fclean all re
