#include "../fdf_header_files/fdf.h"

int		get_dots_from_line(char *line, fdf **matrix_of_dots, int y)
{
    int i;
    char **dots;

    dots = ft_split(line, ' ');
    i = 0;
    while(dots[i])
    {
        matrix_of_dots[y][i].z = ft_atoi(dots[i]);
        matrix_of_dots[y][i].x = i;
        matrix_of_dots[y][i].y = y;
        matrix_of_dots[y][i].end = 0;
        free(dots[i++]);
    }
    free(dots);
    free(line);
    matrix_of_dots[y][--i].end = 1;
    return (i);
}

fdf	**memory_allocation(char *fdf_file)
{
	int fd;
    char *line;
    int size;
    int j;
    fdf **new;

    fd = open(fdf_file, O_RDONLY);
    if (fd <= 0)
        error_mgt();
    line = get_next_line(fd);
    size = wdcount(line, ' ');
    free(line);
    j = 0;
    while((line = get_next_line(fd)))
    {
        j++;
        free(line);
    }
    free(line);
    new = (fdf **)malloc(sizeof(fdf *) * (++j + 1));
    while(j > 0)
        new[--j] = (fdf *)malloc(sizeof(fdf) *(size + 1));
    close(fd);
    return (new);
}

fdf	**read_map(char *fdf_file)
{
	fdf **matrix_of_dots;
    int i;
    int fd;
    char *line;

    i = 0;
    matrix_of_dots = memory_allocation(fdf_file);
    fd = open(fdf_file, O_RDONLY);
    while((line = get_next_line(fd)))
        get_dots_from_line(line, matrix_of_dots, i++);
    free(line);
    matrix_of_dots[i] = NULL;
    close(fd);
    return (matrix_of_dots);
}
