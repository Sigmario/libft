# **************************************************************************** #
#                                                                              #
#                                                       ::::::::   ::::::::    #
#    Makefile                                         :+:    :+: :+:    :+:    #
#                                                           +:+       +:+      #
#    By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+         #
#                                                         +#+   +#+            #
#    Created: 2022/05/12 17:50:33 by julmuntz     #+#    #+#  #+#              #
#    Updated: 2022/05/12 17:57:33 by julmuntz     ########  ########+10        #
#                                                                              #
# **************************************************************************** #

SRCS =	\
        ft_bzero.c      \
        ft_isalnum.c    \
        ft_isalpha.c    \
        ft_isascii.c    \
        ft_isdigit.c    \
        ft_isprint.c    \
        ft_memcpy.c     \
        ft_tolower.c    \
        ft_toupper.c    \

OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS:.c=.o}

NAME = libft.a

CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror.

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}

bonus: ${BONUS_OBJS}
		ar rc ${NAME} ${BONUS_OBJS}
all:		${NAME}

clean:
		${RM} ${OBJS}
		${RM} ${BONUS_OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all


.PHONY:		all clean fclean re