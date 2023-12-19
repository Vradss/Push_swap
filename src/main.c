/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:06:07 by vflorez           #+#    #+#             */
/*   Updated: 2023/12/18 17:37:40 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*int	main(int argc, char *argv[])
{
	t_stack_node	*stack_a;
	t_stack_node	*stack_b;
	stack_a = NULL;
	stack_b = NULL;
	
	int i = 1;
	while(i < argc)
	{
		int value = ft_atoi(argv[i]);
		add_data(&stack_a, value);
		i++;
	}
	printStack("inicial A", stack_a);
	printStack("inicial B ", stack_b);

	ft_pa(&stack_a, &stack_b);

	printStack("final A", stack_a);
	printStack("final B ", stack_b);
	ft_free(stack_a);
	ft_free(stack_b);
	return (0);
}*/

/*int main()
{
	t_stack_node	*stack_a;
	t_stack_node	*stack_b;
	stack_a = NULL;
	stack_b = NULL;

	add_data(&stack_a, 1);
	add_data(&stack_a, 2);
	add_data(&stack_a, 3);

	add_data(&stack_b, 5);
	add_data(&stack_b, 6);
	add_data(&stack_b, 7);

	printStack("inicial A", stack_a);
	printStack("inicial B ", stack_b);

	ft_sa(&stack_a);
	ft_sb(&stack_b);

	printStack("final A", stack_a);
	printStack("final B ", stack_b);
	ft_free(stack_a);
	ft_free(stack_b);
	return (0);
}*/


int main(int argc, char *argv[])
{
	t_stack_node *stack_a;
	stack_a = NULL;

	int i = 1;
	while (i < argc)
	{
		int value = ft_atoi(argv[i]);
		add_data(&stack_a, value);
		if(!check_limits(&stack_a) || !check_duplicate(&stack_a) || !check_str(argv[i]))
		{
			ft_printf("invalid input");
			ft_free(stack_a);
			return (1);
		}
		i++;
	}

	printStack("Inicial A", stack_a);

	ft_stack_organized(stack_a);

	printStack("Final A", stack_a);
	ft_free(stack_a);

	return 0;
}
