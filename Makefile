NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs

SRCS = ft_lstsize.c\
    ft_lstadd_back.c\
    ft_lstnew.c\
    ft_lstiter.c\
    ft_lstclear.c\
    ft_split.c\
    ft_isprint.c\
    ft_tolower.c\
    ft_strdup.c\
    ft_putchar_fd.c\
    ft_lstlast.c\
    ft_strchr.c\
    ft_strmapi.c\
    ft_memchr.c\
    ft_striteri.c\
    ft_bzero.c\
    ft_putstr_fd.c\
    ft_itoa.c\
    ft_lstdelone.c\
    ft_isalpha.c\
    ft_memcpy.c\
    ft_putendl_fd.c\
    ft_lstadd_front.c\
    ft_strrchr.c\
    ft_memcmp.c\
    ft_strjoin.c\
    ft_strlen.c\
    ft_substr.c\
    ft_putnbr_fd.c\
    ft_strnstr.c\
    ft_memset.c\
    ft_strtrim.c\
    ft_lstmap.c\
    ft_strlcpy.c\
    ft_toupper.c\
    ft_isdigit.c\
    ft_isalnum.c\
    ft_isascii.c\
    ft_strncmp.c\
    ft_atoi.c\
    ft_strlcat.c\
    ft_memmove.c\
    ft_calloc.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) $< -c -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SECONDARY: $(OBJS)
