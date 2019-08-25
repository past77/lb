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

SRC = 	fstr/ft_strcmp.c fstr/ft_strlen.c fstr/ft_strdup.c fstr/ft_strcpy.c fstr/ft_strncpy.c fstr/ft_strcat.c \
		fstr/ft_strncat.c fstr/ft_strlcat.c fmem/ft_memcpy.c fstr/ft_strchr.c fstr/ft_strrchr.c fstr/ft_strstr.c \
		fmem/ft_memccpy.c fstr/ft_strncmp.c fmem/ft_memset.c fmem/ft_bzero.c fmem/ft_memchr.c fnum/ft_atoi.c fis/ft_isalpha.c \
		fis/ft_isdigit.c fis/ft_isalnum.c fis/ft_isascii.c fis/ft_isprint.c ft_toupper.c ft_tolower.c \
		fmem/ft_memalloc.c fmem/ft_memmove.c fstr/ft_strnstr.c fmem/ft_memdel.c fstr/ft_strnew.c fstr/ft_strdel.c \
		fstr/ft_strclr.c fstr/ft_striter.c fstr/ft_striteri.c fstr/ft_strmap.c fstr/ft_strmapi.c fstr/ft_strequ.c \
		fstr/ft_strequ.c fstr/ft_strnequ.c fstr/ft_strsub.c fstr/ft_strjoin.c fstr/ft_strtrim.c fstr/ft_itoa.c \
		fout/ft_putchar.c fout/ft_putchar_fd.c fout/ft_putstr.c fout/ft_putendl.c fnum/ft_sqrt.c fout/ft_putstr_fd.c fout/ft_putnbr.c \
		fout/ft_putnbr_fd.c fout/ft_putendl_fd.c fstr/ft_strsplit.c fmem/ft_memcmp.c fstr/count_world.c fstr/len_of_world.c \
		fstr/len_of_nbr.c flst/ft_lstnew.c flst/ft_lstdelone.c fnum/sort.c flst/ft_lstdel.c flst/ft_lstadd.c flst/ft_lstiter.c flst/ft_lstmap.c \
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
