NAME = push_swap
FLAGS = -Wall -Wextra -Werror 
CC = cc

SRC = operation_a.c operations_helper.c push_swap.c push_swap_utils.c \
      b_operation.c operations_helper_one.c parse_args.c split_operation.c \
      sorting_algorithms.c list_operation.c sort.c ft_str_join.c \
      ft_radix.c instructions_radix.c ft_helper_functions.c ft_valid.c

OBJ = $(SRC:.c=.o)
MAIN_SORT_SRC = main.c

all: $(NAME)
$(NAME): $(OBJ) main.o
	$(CC) $(FLAGS) -o $(NAME) $(OBJ) main.o
main.o: $(MAIN_SORT_SRC)
	$(CC) $(FLAGS) -c $(MAIN_SORT_SRC) -o main.o
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ) $(NAME)
fclean: clean
	rm -f $(NAME) $(bonus)
re: fclean all
.PHONY: all clean fclean re
