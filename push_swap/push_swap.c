#include "push_swap.h"


int ft_check_overflow(int n)
{
	if ((n == 2147483647) || (n <= -2147483648))
		return (0);
	if (n > 2147483647)
		return (1);
	else
    	return (0);
}

void	ft_whitespace(const char **str)
{
	while (**str == ' ' || (**str >= '\t' && **str <= '\r'))
		(*str)++;
}

int	ft_sign(const char **str)
{
	int	sign;

	sign = 1;
	ft_whitespace(str);
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign = -1;
		(*str)++;
	}
	return (sign);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	digit;

	sign = ft_sign(&str);
	result = 0;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		digit = *str - '0';
		if (result > INT_MAX / 10 || (result == INT_MAX / 10
				&& digit > INT_MAX % 10))
		{
			if (sign == 1)
				return (2147483647);
			else
				return (-2147483648);
		}
		result = result * 10 + digit;
		str++;
	}
	if (result > 2147483647 || result <= -2147483648)
	{
		write(1, "Error!\n", 7);
		return (1);
	}
	return (result * sign);
}

void	ft_display(t_stack *stak)
{
	t_stack	*stack_a ;

	stack_a = stak;
	if (stack_a == NULL)
		return ;
	while (stack_a != NULL)
	{
		ft_put_nbr(stack_a->data);
		write(1, "\n", 1);
		stack_a = stack_a->link;
	}
}
