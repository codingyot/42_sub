NAME = push_swap
CC = cc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/
BONUS = checker

SRC_1 = src_code/push_swap/push_swap.c \

SRC_2 =	src_code/push_swap/algorithm.c \
		src_code/push_swap/ft_check_utils.c \
		src_code/push_swap/ft_parse.c \
		src_code/push_swap/cal_utils_ab.c \
		src_code/push_swap/cal_utils_ba.c \
		src_code/push_swap/ft_utills.c \
		src_code/push_swap/ft_utills2.c \
		src_code/push_swap/ft_rotate_and_push.c \
		src_code/push_swap/rotations.c \
		src_code/push_swap/rotations2.c \
		src_code/push_swap/rotations3.c \
		src_code/push_swap/lst_utils.c \
		src_code/push_swap/lst_utils_2.c \
		src_code/push_swap/ft_parse_args_quoted.c \
		src_code/push_swap/ft_sort_big.c \
		src_code/push_swap/ft_sort_three.c \
		src_code/push_swap/ft_rotate_type.c \
		
BONUS_SRC = src_code/checker/checker.c \
			src_code/checker/checker_utils.c \
			

OBJ_1 = ${SRC_1:.c=.o}
OBJ_2 = ${SRC_2:.c=.o}

BONUS_OBJ =${BONUS_SRC:.c=.o}

INCLUDE = -L ./libft -lft

%.c%.o:
	${CC} -c $< -o ${<:.c=.o}

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