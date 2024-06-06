#ifndef _FDF_H
#define _FDF_H

#include <math.h>
#include <unistd.h>
#include <stdlib.h>
#include "../libft/libft.h"
# include <math.h>
#include "../minilibx-linux/mlx.h"
#include "../minilibx-linux/mlx_int.h"
#define def_matrx_value matrix_of_dots[0][0]

typedef struct fdf_f
{
    float       x;
    float       y;
    float       z;
    int         end;
    int			color;
	int			scale;
	int			z_scale;
	int			shift_x;
	int			shift_y;
	int			is_isometric;
	double		angle;
	int			win_x;
	int			win_y;
	void		*mlx_ptr;
	void		*win_ptr;
}fdf;

void            error_mgt();
void			set_default(fdf *def_value);
fdf             **read_map(char *fdf_file);
fdf	            **memory_allocation(char *fdf_file);
int             get_dots_from_line(char *line, fdf **matrix_of_dots, int y);
int             wdcount(const char *str, char c);
#endif