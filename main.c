/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:06:07 by vflorez           #+#    #+#             */
/*   Updated: 2023/11/29 18:06:14 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void pushA(int value, t_stack_node **stack)
{
   	t_stack_node *Newnode = (t_stack_node *)malloc(sizeof(t_stack_node));
    Newnode -> data = value;
    Newnode -> link = *stack;
    *stack = Newnode;
}

int main(int argc, char *argv[])
{
	t_stack_node	*stackA;
	//stack_node	*stackB;

	stackA = NULL;
	//stackB = NULL;
	if(argc == 1 || argv[1][0] == '\0')
		printf("Wrongs arguments, try 2 o more");

	int i = 1;

	while(i < argc)
	{
		if(check_str(argv[1]) == 0)
		{
			return (printf("No paso check_str"),1 );
		}
	
		int value = atoi(argv[i]);
		pushA(value, &stackA);
		i++;
	
	} 
	
	if(check_limits(&stackA) == 0 || check_duplicate(&stackA) == 0)
		return (printf("No paso checks"),1 );
	return 0;
}