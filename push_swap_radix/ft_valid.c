/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:06:12 by oallan            #+#    #+#             */
/*   Updated: 2024/05/22 16:06:23 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_valid_stdin(char *str)
{
	if (str)
	{
		if (ft_strcmp(str, "ra") == 0)
			return (1);
		else if (ft_strcmp(str, "rb") == 0)
			return (1);
		else if (ft_strcmp(str, "sa") == 0)
			return (1);
		else if (ft_strcmp(str, "sb") == 0)
			return (1);
		else if (ft_strcmp(str, "rra") == 0)
			return (1);
		else if (ft_strcmp(str, "rrb") == 0)
			return (1);
		else if (ft_strcmp(str, "pa") == 0)
			return (1);
		else if (ft_strcmp(str, "pb") == 0)
			return (1);
		else if (ft_strcmp(str, "ss") == 0)
			return (1);
		else if (ft_strcmp(str, "rrr") == 0)
			return (1);
	}
	return (0);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	while (((*s1 != '\n') || *s2 != '\0'))
	{
		if (*s1 != *s2)
			return ((unsigned char) *s1 - (unsigned char)*s2);
		s1 ++;
		s2 ++;
	}
	return (0);
}
