NAME = fdf
CC = cc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/
# BONUS = fdf_bonus
SRC_DIR = fdf_src_files/

SRC_1 = fdf_src_files/main.c \

SRC_2 =	fdf_src_files/error_mgt.c \
		fdf_src_files/parsing.c \
		fdf_src_files/utility.c \

		
# BONUS_SRC = srcs/checker/checker.c \
# 			srcs/checker/checker_utils.c \
			

OBJ_1 = ${SRC_1:.c=.o}
OBJ_2 = ${SRC_2:.c=.o}

# BONUS_OBJ =${BONUS_SRC:.c=.o}

INCLUDE = -L ./libft -lft

%.c%.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ_1} ${OBJ_2}
	make -C $(LIBFTDIR)
	${CC} ${FLAGS} ${OBJ_1} ${OBJ_2} -o ${NAME} ${INCLUDE}

# ${BONUS}: ${OBJ_2} ${BONUS_OBJ} 
# 	make -C $(LIBFTDIR)
# 	${CC} ${FLAGS} ${BONUS_OBJ} ${OBJ_2} -o ${BONUS} ${INCLUDE}

all: ${NAME} ${BONUS}

# bonus: ${BONUS} 

clean:
	${RM} ${OBJ_1} ${OBJ_2} ${NAME}
	cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	${RM} ${NAME}
	cd $(LIBFTDIR) && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re bonus