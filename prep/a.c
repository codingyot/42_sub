#include <unistd.h>

int non_dup(char *str, char c, int x)
{
    int i = 0;

    while(str[i] && (i < x || i == -1))
    {
        if (str[i] == c)
            return 1;
        i++; 
    }
    return 0;
}
int main(int ac, char **av)
{
    int i = 0;

    if (ac == 3)
    {
       while(av[1][i])
       {
            if (!non_dup(av[1], av[1][i], i) && !non_dup(av[2], av[1][i], -1))
                write(1, &av[1][i], 1);
            i++;
       }
    }
    write (1, "\n", 1);
}