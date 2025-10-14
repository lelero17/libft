<<<<<<< HEAD
=======
#Variablen

NAME = libft.a

CC = cc

CFLAGS += -Wall -Wextra -Werror

AR = ar

ARFLAGS = rcs

RM = rm -f

#Quellen & Objekte

MY_SOURCES = 	ft_bzero.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_strlen.c \
				ft_tolower.c \
				ft_toupper.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)
>>>>>>> f768f16 (Updated)
