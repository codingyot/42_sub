NAME = push_swap
CC = cc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/
OBJ_DIR = obj/
BONUS = checker
SRC_DIR = srcs/

SRC_1 = srcs/push_swap/push_swap.c

SRC_2 =	srcs/push_swap/b_operation.c \
		srcs/push_swap/ft_valid.c \
		srcs/push_swap/sort.c \
		srcs/push_swap/ft_helper_functions.c \
		srcs/push_swap/instructions_radix.c \
		srcs/push_swap/operations_helper.c \
		srcs/push_swap/sorting_algorithms.c \
		srcs/push_swap/ft_radix.c \
		srcs/push_swap/list_operation.c \
		srcs/push_swap/operations_helper_one.c \
		srcs/push_swap/split_operation.c \
		srcs/push_swap/ft_str_join.c \
		srcs/push_swap/parse_args.c \
		srcs/push_swap/push_swap_utils.c\
		srcs/push_swap/main.c \
		srcs/push_swap/operation_a.c \


BONUS_SRC = srcs/checker/checker.c \
			srcs/checker/checker_utils.c

OBJ_1 = ${SRC_1:.c=.o}
OBJ_2 = ${SRC_2:.c=.o}
BONUS_OBJ = ${BONUS_SRC:.c=.o}

INCLUDE = -I ./push_swap/push_swap.h

%.o: %.c
	${CC} -c $< -o $@

${NAME}: ${OBJ_1} ${OBJ_2}
	make -C $(LIBFTDIR)
	${CC} ${FLAGS} ${OBJ_1} ${OBJ_2} -o ${NAME} ${INCLUDE}

${BONUS}: ${OBJ_2} ${BONUS_OBJ} 
	make -C $(LIBFTDIR)
	${CC} ${FLAGS} ${BONUS_OBJ} ${OBJ_2} -o ${BONUS} ${INCLUDE}

all: ${NAME} ${BONUS}

bonus: ${BONUS} 

clean:
	${RM} ${OBJ_1} ${OBJ_2} ${BONUS_OBJ} ${NAME} ${BONUS}
	cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	${RM} ${NAME}
	cd $(LIBFTDIR) && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re bonus
