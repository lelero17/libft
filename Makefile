NAME	= libft.a

CC		= gcc
CFLAGS	+= -Wall -Wextra -Werror

AR		= ar 
ARFLAGS = rcs
# Archiviert libft.a aus mehreren .o-Files
# r = replace/add, c = create, s = index erstellen

RM		= rm -f

SRCS	= 	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strlcpy.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c


OBJS	= $(SRCS:%.c=%.o)
# Erzeugt aus jeder .c ein .o im Ordner OBJ

all: $(NAME)
# Wird ausgefuehrt bei 'make', Standardziel

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
# Baut die Bibliothek libft.a aus allen .o-Dateien

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
# Kompiliert jede .c zu .o
# $< Quell-Datei | $@ Ziel-Datei
# libft.h -> bei Headeraenderung neu kompilieren

clean: 
	$(RM) $(OBJS)
# Loescht alle .o-Dateien

fclean: clean
	$(RM) $(NAME)
# Loescht zusaetzlich libft.a

re: fclean all
# Alles neu bauen

.PHONY: all clean fclean re
# Sagt einfach das diese Targets ausgefuehrt wird, auch wenn Files mit gleichen namen exestieren