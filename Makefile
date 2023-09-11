NAME = libft.a
CC = cc
SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_itoa.c ft_memset.c ft_putchar_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c \
	ft_putstr_fd.c ft_strdup.c
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror
DIR = ./objs/

all: $(NAME)

$(NAME): $(addprefix $(DIR), $(OBJ))
	@ar rc $(NAME) $(addprefix $(DIR), $(OBJ))
	@ranlib $(NAME)
	@echo "$(NAME) created"

$(DIR)%.o: %.c | $(DIR)
	@$(CC) $(FLAGS) -c $< -o $@

$(DIR):
	@mkdir -p $(DIR)

clean:
	@rm -rf $(DIR)
	@echo "Objects deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all


