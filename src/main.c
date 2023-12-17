/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradis <vradis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:06:07 by vflorez           #+#    #+#             */
/*   Updated: 2023/12/17 14:21:51 by vradis           ###   ########.fr       */
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

int main()
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
}