/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:52:43 by oallan            #+#    #+#             */
/*   Updated: 2024/05/07 20:24:19 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header_file/push_swap.h"

int	ft_atoi2(char *str)
{
	int				sign;
	long long int	i;

	i = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (1);
		i = i * 10 + (*str - 48);
		str++;
	}
	if ((sign * i) > 2147483647 || (sign * i) < -2147483648)
		return (1);
	return (sign * i);
}

t_stack	*ft_sub_process(char **argv)
{
	t_stack	*a;
	char	**tmp;
	int		i;
	int		j;

	a = NULL;
	i = 0;
	j = 0;
	// while (argv[1][j])
	// {	
	// 	if(!(argv[1][j] >= '0' && argv[1][j] <= '9'))
	// 	{
	// 		ft_printf("Error!\n");
	// 		exit(1);
	// 	}
	// 	j++;
	// }
	tmp = ft_split(argv[1], ' ');
	if (tmp == NULL)
	{
		ft_free_str(tmp);
		return (0);
	}
	i = 0;
	while (tmp[i])
	{
		j = ft_atoi2(tmp[i]);
		ft_add_back(&a, ft_stack_new(j));
		i++;
	}
	ft_free_str(tmp);
	free(tmp);
	return (a);
}

t_stack	*ft_process(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		j;

	i = 1;
	j = 0;
	// while (argv[1][j])
	// {	
	// 	if(!(argv[1][j] >= '0' && argv[1][j] <= '9'))
	// 	{
	// 		ft_printf("Error!\n");
	// 		exit(1);
	// 	}
	// 	j++;
	// }
	// if (argc < 2)
	// 	exit(0);
	if (argc == 2)
	{
		a = ft_sub_process(argv);
		if (!a)
			ft_free(&a);
	}
	else
	{
		a = NULL;
		while (i < argc)
		{
			process_argument(argv[i], &a);
			i++;
		}
	}
	return (a);
}
