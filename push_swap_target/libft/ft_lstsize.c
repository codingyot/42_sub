/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:23:19 by oallan            #+#    #+#             */
/*   Updated: 2024/04/24 17:23:42 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsizes(t_list *lst)
{
	t_list	*p;
	int		i;

	p = lst;
	i = 0;
	while (p)
	{
		p = p->next;
		i++;
	}
	return (i);
}
