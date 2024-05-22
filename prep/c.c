#include <unistd.h>
#include <stdio.h>

void write_content(char *start, char *end)
{
    while(start < end)
    {
        write(1, start, 1);
        start++;
    }
}

int main(int ac, char **av)
{
    char *start_point, *end_point, *str;

    if (ac > 1)
    {
        str = av[1];
        while(*str == ' ' || *str == '\t')
            str++;
        start_point = str;
        while(*str && *str != ' ' && *str != '\t')
            str++;
        end_point = str;
        while(*str == ' ' || *str == '\t')
            str++;
        if (*str)
        {
            while(*str)
            {
                if (*str == ' ' || *str == '\t')
                {
                    while(*str == ' ' || *str == '\t')
                        str++;
                    if (*str)
                        write(1, " ", 1);
                }
                else
                {
                    write(1, str, 1);
                    str++;
                }
            }
            write(1, " ", 1);
        }
        write_content(start_point, end_point);
    }
    write(1, "\n", 1);
return 0;
}