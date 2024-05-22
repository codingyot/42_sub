/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:51:42 by oallan            #+#    #+#             */
/*   Updated: 2024/05/07 20:18:33 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header_file/push_swap.h"

t_stack	*ft_parse(int argc, char **argv)
{
	t_stack	*stack_a;
	int		i;
	int		j;

	i = 1;
	stack_a = NULL;
	if (argc < 2)
		ft_error();
	else if (argc == 2)
		stack_a = ft_parse_args_quoted(argv);
	else
		list_args(&stack_a, argv);
	return (stack_a);
}

void	process_argument(char *arg, t_stack **a)
{
	char	**tmp;
	int		j;
	int		num;

	tmp = ft_split(arg, ' ');
	if (!tmp)
	{
		ft_error();
		return ;
	}
	j = 0;
	while (tmp[j])
	{
		num = ft_atoi2(tmp[j]);
		ft_add_back(a, ft_stack_new(num));
		j++;
	}
	ft_free_str(tmp);
	free(tmp);
}
