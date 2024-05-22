/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:15:41 by oallan            #+#    #+#             */
/*   Updated: 2024/04/24 17:15:45 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header_file/push_swap.h"

void	ft_error_ch(void)
{
	write(1, "Error!\n", 8);
	exit(1);
}
