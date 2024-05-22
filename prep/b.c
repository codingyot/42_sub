#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_itoa(int nbr)
{
    int len = 0;
    char *result;
    int tmp;

    if (nbr == -2147483648)
        return ("2147483648\0");
    tmp = nbr;
    while (tmp)
    {
        tmp /= 10;
        len++;
    }
    result = (char *)malloc(sizeof(char) * (len + 1));
    if(!result)
        return NULL;
    result[len] = '\0';
    if (nbr == 0)
        result[0] = '0';
    if (nbr < 0 && nbr != 2147483648)
    {
        write(1, "-", 1);
        nbr *= -1;
    }
    while(nbr > 0)
    {
        result[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return result;
}

int main(int ac, char **av)
{
    char *str;
    int data = atoi(av[1]);
    if (ac == 2)
    {
        str = ft_itoa(data);
        printf("%s\n", str);
    }
    else
        write(1, "\n", 1);
    return 0;
}
