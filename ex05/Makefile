CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = do-op
SRC_DIR = srcs
INCLUDE_DIR = includes
SRCS = add.c \
       divide.c \
       ft_atoi.c \
       ft_operations.c \
       ft_operators.c \
       ft_putchar.c \
       ft_putnbr.c \
       get_operations.c \
       main.c \
       modulo.c \
       multiply.c \
       subtract.c
OBJS = $(addprefix $(SRC_DIR)/, $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
