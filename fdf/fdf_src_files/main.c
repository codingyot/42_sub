#include "../fdf_header_files/fdf.h"

void set_default(fdf *def_value)
{
    def_value->angle = 45;
    def_value->is_isometric = 1;
    def_value->scale = 1;
    def_value->shift_x = def_value->win_x / 3;
    def_value->z_scale = 40;
    def_value->shift_y = def_value->win_y  / 3;
    def_value->mlx_ptr = mlx_init();
    def_value->win_x = 1000;
    def_value->z_scale = 500;
    def_value->win_y = 2500;
    mlx_new_window(def_value->win_ptr,def_value->win_x, def_value->win_y , "FDF");
}

int main(int ac , char **av)
{
    fdf **matrix_of_dots;

    if (ac != 2)
        error_mgt();
    matrix_of_dots = read_map(*++av);
    set_default(&def_matrx_value);
}