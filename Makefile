# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 10:40:26 by tzanchi           #+#    #+#              #
#    Updated: 2023/05/19 16:53:38 by tzanchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
NAME		=	libftprintf.a
LIBFT		=	libft.a

SRCS_DIR	=	./sources/
HEAD_DIR	=	./includes/
LIBFT_DIR	=	./libft/

SRC			=	ft_printf_writers.c \
				ft_printf.c

SRCS		=	$(addprefix ${SRCS_DIR}, ${SRC})

OBJS		=	${SRCS:.c=.o}

all:			
				make ${LIBFT}
				make ${NAME}

${LIBFT}:
				make -C ${LIBFT_DIR}

${NAME}:		${OBJS} ${LIBFT}
				cp ${LIBFT_DIR}${LIBFT} ${NAME}
				ar rcs ${NAME} ${OBJS}

.c.o:
				${CC} ${CFLAGS} -I${HEAD_DIR} -I${LIBFT_DIR} -c $< -o $@
				
clean:
				make -C ${LIBFT_DIR} clean
				rm -f ${OBJS}

fclean:			clean
				make -C ${LIBFT_DIR} fclean
				rm -f ${NAME}

re:				fclean all

test:			all
				${CC} test.c -L. -lftprintf -I${HEAD_DIR} -I${LIBFT_DIR} -o test
				@echo "\n"
				./test

.PHONY:			all clean fclean re test