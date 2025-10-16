# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lemmerli <lemmerli@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/16 12:51:49 by lemmerli          #+#    #+#              #
#    Updated: 2025/10/16 16:48:47 by lemmerli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS += -Wall -Wextra -Werror

AR = ar

ARFLAGS = rcs

RM = rm -f

MY_SOURCES = 	ft_bzero.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_strchr.c \
				ft_strlen.c \
				ft_strncmp.c \
				ft_strrchr.c \
				ft_tolower.c \
				ft_toupper.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	$(AR) $(ARFLAGS) $(NAME) $(MY_OBJECTS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	$(RM) $(MY_OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re