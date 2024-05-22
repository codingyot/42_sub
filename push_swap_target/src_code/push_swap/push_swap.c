/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:03:43 by oallan            #+#    #+#             */
/*   Updated: 2024/04/24 17:03:45 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header_file/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	a = ft_process(argc, argv);     
	if (!a || ft_check_dup(a))
	{
		ft_free(&a);
		ft_error();
		free(a);
	}
	if (!ft_check_sorted(a))
		ft_sort(&a);
	ft_free(&a);
	return (0);
}
