# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/20 14:37:07 by nalonso-          #+#    #+#              #
#    Updated: 2019/12/13 06:59:47 by nalonso-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memchr.c \
	ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strnstr.c ft_memmove.c \
	ft_atoi.c ft_strlcat.c ft_calloc.c ft_strdup.c ft_substr.c

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all:	$(NAME)

$(NAME): $(OBJS) libft.h
		@ar rcs $(NAME) $(OBJS)

%.o : 	%.c
		@gcc $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re