# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdumitru <mdumitru@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/20 18:31:51 by mdumitru          #+#    #+#              #
#    Updated: 2024/10/20 18:31:54 by mdumitru         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_printf.c ft_strings.c ft_numbers.c ft_write.c ft_len.c

OBJS			= $(SRCS:.c=.o)

INCLUDES		= ft_printf.h

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.
AR				= ar rc

NAME			= libftprintf.a

all:			$(NAME)

%.o	: %.c
		$(CC) $(CFLAGS) -c $(SRCS)

$(NAME):		$(OBJS) $(INCLUDES)
				$(MAKE) -C libft
				cp libft/libft.a .
				mv libft.a $(NAME)
				$(AR) $(NAME) $(OBJS)

clean:
				make clean -C libft
				$(RM) $(OBJS)

fclean:			clean
				make fclean -C libft
				$(RM) $(NAME) libft.a

re:				fclean all

.PHONY:			all clean fclean re