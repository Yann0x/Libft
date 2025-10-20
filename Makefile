NAME = libft.a

INC = includes
SRCDIR = srcs
BONUSDIR = bonus

SRCS = $(SRCDIR)/ft_atoi.c \
       $(SRCDIR)/ft_bzero.c \
       $(SRCDIR)/ft_calloc.c \
       $(SRCDIR)/ft_isalnum.c \
       $(SRCDIR)/ft_isalpha.c \
       $(SRCDIR)/ft_isascii.c \
       $(SRCDIR)/ft_isdigit.c \
       $(SRCDIR)/ft_isprint.c \
       $(SRCDIR)/ft_itoa.c \
       $(SRCDIR)/ft_memchr.c \
       $(SRCDIR)/ft_memcmp.c \
       $(SRCDIR)/ft_memcpy.c \
       $(SRCDIR)/ft_memmove.c \
       $(SRCDIR)/ft_memset.c \
       $(SRCDIR)/ft_putchar_fd.c \
       $(SRCDIR)/ft_putendl_fd.c \
       $(SRCDIR)/ft_putnbr_fd.c \
       $(SRCDIR)/ft_putstr_fd.c \
       $(SRCDIR)/ft_split.c \
       $(SRCDIR)/ft_strchr.c \
       $(SRCDIR)/ft_strdup.c \
       $(SRCDIR)/ft_striteri.c \
       $(SRCDIR)/ft_strjoin.c \
       $(SRCDIR)/ft_strlcat.c \
       $(SRCDIR)/ft_strlcpy.c \
       $(SRCDIR)/ft_strlen.c \
       $(SRCDIR)/ft_strmapi.c \
       $(SRCDIR)/ft_strncmp.c \
       $(SRCDIR)/ft_strnstr.c \
       $(SRCDIR)/ft_strrchr.c \
       $(SRCDIR)/ft_strtrim.c \
       $(SRCDIR)/ft_substr.c \
       $(SRCDIR)/ft_tolower.c \
       $(SRCDIR)/ft_toupper.c

BONUS_SRCS =  $(BONUSDIR)/ft_lstnew_bonus.c \
	       $(BONUSDIR)/ft_lstadd_front_bonus.c \
              $(BONUSDIR)/ft_lstsize_bonus.c \
              $(BONUSDIR)/ft_lstlast_bonus.c \
              $(BONUSDIR)/ft_lstadd_back_bonus.c \
              $(BONUSDIR)/ft_lstdelone_bonus.c \
              $(BONUSDIR)/ft_lstclear_bonus.c \
              $(BONUSDIR)/ft_lstiter_bonus.c \
              $(BONUSDIR)/ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(INC)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs  $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re