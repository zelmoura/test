NAME = libft.a

CC = gcc

INCLUDE = libft.h

CFLAGS = -Wall -Wextra -Werror

sources = ft_isascii.c ft_memmove.c ft_strlen.c ft_isdigit.c ft_memset.c\
		  ft_bzero.c ft_isprint.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
		  ft_memchr.c ft_atoi.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_strnstr.c\
		  ft_isalnum.c ft_memcmp.c ft_strlcat.c ft_tolower.c ft_strdup.c\
		  ft_isalpha.c ft_memcpy.c ft_strlcpy.c ft_toupper.c ft_calloc.c\


BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\


objet_bonus = $(BONUS:%.c=%.o)

objet = $(sources:%.c=%.o)

all: $(NAME)

$(NAME): $(objet)
	ar -rcs $(NAME) $(objet)

bonus : $(objet_bonus)
	ar -rcs $(NAME) $(objet_bonus)

%.o : %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	/bin/rm -f $(objet) $(objet_bonus)

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all
