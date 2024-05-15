# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysirkich <ysirkich@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/15 14:56:41 by ysirkich          #+#    #+#              #
#    Updated: 2024/05/15 16:33:36 by ysirkich         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
LIBFTNAME	=	libft.a
LIBFTDIR	=	./libft

CC	=	gcc
RM  = rm -f
AR	=	ar	rcs
CFLAGS	=	-Wall	-Werror	-Wextra

SRC	=	ft_printf.c	ft_printformat.c
OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
		@make	-C	$(LIBFTDIR)
		@cp	$(LIBFTDIR)/$(LIBFTNAME) $(NAME)
		@$(AR) $(NAME)	$(OBJ)

clean:
		$(RM)	$(OBJ)
		@make	-C	$(LIBFTDIR)	clean

fclean:	clean
		$(RM)	$(NAME)
		@make	-C	$(LIBFTDIR)	Fclean

re:	fclean	all
.PHONY:	all bonus clean fclean re libft