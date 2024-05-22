/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_args_quoted.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:51:09 by oallan            #+#    #+#             */
/*   Updated: 2024/04/24 16:51:12 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header_file/push_swap.h"

void	ft_free_str(char **lst)
{
	char	*n;

	if (!lst)
		return ;
	while (*lst)
	{
		n = *lst;
		lst++;
		free(n);
	}
	*lst = NULL;
}

t_stack	*ft_parse_args_quoted(char **argv)
{
	t_stack	*stack_a;
	char	**tmp;
	int		i;
	int		j;

	stack_a = NULL;
	i = 0;
	tmp = ft_split(argv[1], 32);
	if (!tmp)
		ft_free_str(tmp);
	list_args(&stack_a, tmp);
	ft_free_str(tmp);
	return (stack_a);
}
