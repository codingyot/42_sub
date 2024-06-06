#include "../fdf_header_files/fdf.h"

int wdcount(const char *str, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while(str[i])
    {
        while(str[i] == c && str[i] != '\0')
            i++;
        if (str[i])
            count++;
        while(str[i] != c && str[i] != '\0')
            i++;
    }
    return (count);
}