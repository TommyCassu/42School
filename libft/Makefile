# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcassu <tcassu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 17:43:09 by marvin            #+#    #+#              #
#    Updated: 2024/11/04 21:36:49 by tcassu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_atoi.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

SRCS 		= ${addprefix ${PRESRC}, ${SRC}}

OBJS		= ${SRCS:.c=.o}

PRESRC		= ./srcs/

INCLUDES	= ./includes/

NAME		= libft.a

AR			= ar rc

RM			= rm -f

RANLIB		= ranlib

GCC			= gcc

CFLAGS		= -Wall -Werror -Wextra

all:		${NAME}

.c.o:
			${GCC} ${CFLAGS} -c -I ${INCLUDES} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			${RANLIB} ${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re