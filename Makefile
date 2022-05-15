# **************************************************************************** #
#                                                                              #
#                                                       ::::::::   ::::::::    #
#    Makefile                                         :+:    :+: :+:    :+:    #
#                                                           +:+       +:+      #
#    By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+         #
#                                                         +#+   +#+            #
#    Created: 2022/05/12 17:50:33 by julmuntz     #+#    #+#  #+#              #
#    Updated: 2022/05/13 17:46:31 by julmuntz     ########  ########+10        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_bzero.c      \
        ft_isalnum.c    \
        ft_isalpha.c    \
        ft_isascii.c    \
        ft_isdigit.c    \
        ft_isprint.c    \
        ft_memcpy.c     \
        ft_memmove.c    \
        ft_memset.c     \
        ft_strchr.c     \
        ft_strlcat.c    \
        ft_strlcpy.c    \
        ft_strlen.c     \
        ft_strncmp.c    \
        ft_strrchr.c    \
        ft_tolower.c    \
        ft_toupper.c    \

OBJS = ${SRCS:.c=.o}

NAME = libft.a

CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}

all:		${NAME}

bonus: all

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all


.PHONY:		all clean fclean re