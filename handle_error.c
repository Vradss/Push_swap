/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:50:18 by vflorez           #+#    #+#             */
/*   Updated: 2023/12/04 18:57:01 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Function checks data int_limits */
int	check_limits(t_stack_node **stack)
{
	t_stack_node	*newnode;
	newnode = malloc(sizeof(t_stack_node));
	*stack = newnode;
	while(newnode)
	{
		if(newnode->data > INT_MAX || newnode->data < INT_MIN)
		{
			free(newnode);
			return (printf("Error\n"),0);
		}
		newnode->link = newnode;
	}
	free(newnode);
	return (1);
}

/*Function checks repeat or duplicate data nodes*/
int	check_duplicate(t_stack_node **stack)
{
	t_stack_node	*newnode;
	t_stack_node	*duplicate;
	newnode = *stack ;
	if (check_limits(stack) != '\0')
		return (0);
	duplicate = newnode->link;
	while(newnode && duplicate)
	{
		while(duplicate != NULL)
		{
			if(newnode->data == duplicate->data)
			{
				return (printf("Error with data\n"),0);
			}
			duplicate = duplicate->link;
		}
		duplicate = newnode->link;
	}
	return (1);
}
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}


/*Function checks if the argument is any character is a digit or not*/
int	check_str(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			i++;
		if (ft_isdigit(str[i]) == 0)
			return (printf("Error pendejo\n"),0);
		i++;
	}
	return (1);
}



