LIBRARY = ft_printf
NAME = libftprintf.a
HEADER = $(LIBRARY).h
LIBFT_PATH = libft/
LIBFT = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror 
CFILES = $(wildcard *.c)
OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES) $(LIBFT)
	ar -rcs $(NAME) $(OFILES) $(LIBFT)
	@echo "ft_printf $(NAME) created."

$(LIBFT):
	make -C $(LIBFT_PATH) && mv $(LIBFT_PATH)libft.a .

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME) $(LIBFT)
	@echo "Cleaned up."

test: $(NAME) $(LIBFT)
	make && cc ft_printf.c $(NAME) $(LIBFT) -o xx && ./xx

re: fclean all

.PHONY: all clean fclean re test