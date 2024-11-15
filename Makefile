LIBRARY = ft_printf
NAME = libftprintf.a
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_NAME = libft.a
CC = cc
LIBFT_OFILES= $(LIBFT_DIR)/*.o
CFLAGS = -Wall -Wextra -Werror 
CFILES = $(filter-out main.c, $(wildcard ./srcs/*.c))
OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OFILES)
	ar rcs $(NAME) $(OFILES) $(LIBFT_OFILES)

$(LIBFT):
	make -C $(LIBFT_DIR)
	make bonus -C $(LIBFT_DIR)

clean:
	rm -f $(OFILES)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME) $(LIBFT_NAME)
	make -C $(LIBFT_DIR)
	make bonus -C $(LIBFT_DIR) fclean

test: $(NAME) $(LIBFT)
	cc main.c $(NAME) $(LIBFT) -o xx && ./xx

re: fclean all

.PHONY: all clean fclean re