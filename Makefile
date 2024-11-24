CC = cc
CFLAGS = -Wall -Wextra -Werror 
NAME = libftprintf.a
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

CFILES = ft_printf.c \
		ft_decimal_to_hex.c \
		ft_puthex.c \
		ft_putnbr.c \
		ft_putubr.c \
		ft_safe_write.c \
		handle_char.c \
		handle_format.c \
		handle_hex.c \
		handle_integer.c \
		handle_percent.c \
		handle_pointer.c \
		handle_string.c \
		handle_unsigned.c 

OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OFILES)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OFILES)

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	rm -f $(OFILES)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re