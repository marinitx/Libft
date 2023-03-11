SRC = ft_isalpha.c ft_isdigit.c ft_memset.c \
	  ft_strlen.c ft_isalnum.c \
	  ft_isascii.c ft_isprint.c ft_bzero.c ft_memcpy.c \
	  ft_memmove.c ft_strlcpy.c ft_tolower.c ft_toupper.c \
	  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcat.c \
	  ft_atoi.c ft_strnstr.c ft_calloc.c ft_substr.c ft_strjoin.c \
	  ft_strdup.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	  ft_memchr.c ft_memcmp.c ft_striteri.c

BONUS = 
OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)
C = gcc -c
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
RM =  /bin/rm -f

$(NAME): $(OBJS)
	$(C) $(FLAGS) $(SRC)
	ar rcs $(NAME) $(OBJS)
all: $(NAME) 

B = .

bonus: $(B)

$(B): $(OBJ) $(BONUS_OBJS)
	$(C) $(FLAGS) $(SRC)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)
fclean: clean
	$(RM) $(NAME) $(BONUS_OBJS) $(OBJS)
re: fclean all
.PHONY: all fclean clean re 
