# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/25 11:24:38 by stde-alm          #+#    #+#              #
#    Updated: 2022/01/25 12:22:42 by stde-alm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_write.c ft_writenbr.c ft_printf.c ft_writehexa.c ft_writeadd.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

HEADER	= ft_printf.h

CC		= gcc

CCLIB	= ar rc

NORM	= norminette

CFLAGS	= -Wall -Wextra -Werror

NFLAGS	= -RCheckForbiddenSourceHeader -RCheckDefine

RM		= rm -f

${NAME} :	${OBJS}
#			${CC} -o ${NAME} ${OBJS}
			${CCLIB} ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

normi:		fclean
			${NORM} ${NFLAGS} ${SRCS}
			${NORM} ${NFLAGS} ${HEADER}

bonus:		${OBJS} ${BONUS_OBJS}
			${CCLIB} ${NAME} ${SRCS} ${bonus_OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re normi bonus
