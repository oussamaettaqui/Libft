# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oettaqui <oettaqui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 17:55:49 by oettaqui          #+#    #+#              #
#    Updated: 2023/11/18 12:25:08 by oettaqui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
SRCS = ft_putchar_fd.c ft_strmapi.c \
       ft_atoi.c ft_putendl_fd.c ft_strncmp.c \
       ft_bzero.c ft_putnbr_fd.c ft_strnstr.c \
       ft_calloc.c ft_putstr_fd.c ft_strrchr.c \
       ft_isalnum.c ft_split.c ft_strtrim.c \
       ft_isalpha.c ft_strchr.c ft_substr.c \
       ft_isascii.c ft_strdup.c ft_tolower.c \
       ft_isdigit.c ft_memchr.c ft_striteri.c ft_toupper.c \
       ft_isprint.c ft_memcmp.c ft_strjoin.c \
       ft_itoa.c ft_memcpy.c ft_strlcat.c \
       ft_memmove.c ft_strlcpy.c \
       ft_memset.c ft_strlen.c

BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
	ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstclear_bonus.c

OBJS = ${SRCS:.c=.o}
OBJSBONUS = ${BONUS:.c=.o}
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}

${OBJS}: ${SRCS}
	${CC} ${CFLAGS} -c ${SRCS}

${OBJSBONUS}: ${BONUS}
	${CC} ${CFLAGS} -c ${BONUS}
	ar -rcs ${NAME} ${OBJSBONUS} 

bonus: ${OBJSBONUS}

clean:
	${RM} ${OBJS} ${OBJSBONUS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
