# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 10:40:26 by tzanchi           #+#    #+#              #
#    Updated: 2023/05/16 16:07:30 by tzanchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
NAME		=	libftprintf.a
LIBFT		=	libft.a

SRCS_DIR	=	./sources/
HEAD_DIR	=	./includes/
LIBFT_DIR	=	./libft/

SRC			=	counters.c \
				ft_printf.c \
				ft_putnbr_base_fd.c \
				ft_putptr_fd.c

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
				rm -f ${OBJS}

fclean:			clean
				rm -f ${NAME}

re:				fclean all

test:			all
				${CC} test.c -L. -lftprintf -I${HEAD_DIR} -I${LIBFT_DIR} -o test
				@echo "\n"
				./test

.PHONY:			all clean fclean re