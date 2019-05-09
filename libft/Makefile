# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/01 20:41:17 by ppolozhe          #+#    #+#              #
#    Updated: 2019/02/20 12:19:24 by ppolozhe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = ./includes/libft.h ./includes/get_next_line.h ./ft_printf/ft_printf.h
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
INC = -I includes/
CC = @gcc

SRC = 	ft_strcmp.c ft_strlen.c	ft_strdup.c	ft_strcpy.c ft_strncpy.c ft_strcat.c \
		ft_strncat.c ft_strlcat.c ft_memcpy.c	ft_strchr.c ft_strrchr.c ft_strstr.c \
		ft_memccpy.c ft_strncmp.c ft_memset.c ft_bzero.c ft_memchr.c ft_atoi.c ft_isalpha.c \
		ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
		ft_memalloc.c ft_memmove.c ft_strnstr.c ft_memdel.c ft_strnew.c ft_strdel.c \
		ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
		ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_itoa.c \
		ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putendl.c ft_putstr_fd.c ft_putnbr.c \
		ft_putnbr_fd.c ft_putendl_fd.c ft_strsplit.c ft_memcmp.c count_world.c len_of_world.c \
		len_of_nbr.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c \
		get_next_line.c

P_SRC = ft_printf.c  pt_digit.c pt_string.c perc_and_char.c \
		annonce_flags.c choose_type.c ft_write_pt1.c ft_write_pt2.c ft_write_pt3.c write_press.c \
		write_main_press.c ft_rapist.c fills.c ft_uns_digits.c rape_float.c lib_fn0.c colors.c float_pt2.c

P_OBJ = $(P_SRC:.c=.o)

OBJ = $(SRC:.c=.o)

P_OBJECT = $(addprefix ./ft_printf/, $(P_OBJ))

all: $(NAME)

$(NAME) :  $(OBJ) $(P_OBJECT)
		@ar rc $(NAME) $(OBJ) $(P_OBJECT) $(HEADER)
		@ranlib $(NAME)
		@echo "\x1B[32m\0I'm created, thanks\x1B[0m\0"

clean:
		@rm -f $(OBJ) $(P_OBJECT)

fclean: clean
		@rm -f $(NAME)
		@echo "\x1B[36m\0Ohh, you reload me\x1B[0m\0"

re: fclean all
