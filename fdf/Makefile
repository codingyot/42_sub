NAME = fdf
CC = cc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/
MLX = minilibx-linux/
SRC_DIR = fdf_src_files/
SRC_1 = fdf_src_files/main.c
SRC_2 = fdf_src_files/error_mgt.c \
        fdf_src_files/read_maps.c \
        fdf_src_files/utility.c
SRC_3 = minilibx-linux/libmlx.a \
		libft/libft.a 
OBJ_1 = ${SRC_1:.c=.o}
OBJ_2 = ${SRC_2:.c=.o}
INCLUDES = -Ilibft -Iminilibx-linux
%.o: %.c
		${CC} ${FLAGS} ${INCLUDES} -c $< -o $@
		make -C $(LIBFTDIR)
		make -C $(MLX) all
${NAME}: ${OBJ_1} ${OBJ_2} ${SRC_3}
		${CC} ${FLAGS} ${OBJ_1} ${OBJ_2} ${SRC_3} -o ${NAME}
all: ${OBJ_1} ${OBJ_2} ${NAME}
clean:
		${RM} ${OBJ_1} ${OBJ_2}
		cd $(LIBFTDIR) && $(MAKE) clean
		cd $(MLX) && $(MAKE) clean
fclean: clean
		${RM} ${NAME}
		cd $(LIBFTDIR) && $(MAKE) fclean
re: fclean all
.PHONY: all clean fclean re