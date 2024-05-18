/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:06:07 by vflorez           #+#    #+#             */
/*   Updated: 2024/05/18 19:01:05 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	int		arg;

	stack_a = NULL;
	arg = 0;
	if (argc == 1 || !ft_strlen(argv[1]))
		return (0);
	while (++arg < argc)
		ft_handle_parsing(argv[arg], &stack_a);
	if (!ft_stack_organized(stack_a))
		ft_sort_all(&stack_a);
	ft_free(stack_a);
	return (0);
}
