NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c
OFILES = $(SRC:.c=.o) 
all:$(NAME)
$(NAME):$(OFILES) 
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OFILES) 

clean:
	rm -f $(OFILES)
fclean:clean
	rm -f $(NAME)
re:fclean $(NAME)
