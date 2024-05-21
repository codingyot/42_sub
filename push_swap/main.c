#include "push_swap.h"

int	main(int ac, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac > 1)
	{
		if (ft_std_out(argv[1], "") == 0 || checkLeadingSpace(argv[1]) == 1)
		{
			ft_error();
			return (0);
		}
		ft_parse(&stack_a, argv);
		if (ft_duplicate(stack_a))
			ft_error();
		else if (ft_is_sorted(stack_a) == 1 && !ft_duplicate(stack_a))
			ft_sort_num(&stack_a, &stack_b);
		else if (ac == 2 || !ft_is_sorted(stack_a))
			return (ft_free_stack(stack_a),0);
		ft_free_stack(stack_a);
		return (1);
	}
	free(stack_a);
	free(stack_b);
}
