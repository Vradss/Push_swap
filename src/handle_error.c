/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:50:18 by vflorez           #+#    #+#             */
/*   Updated: 2023/12/13 14:03:02 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"
#include "libft.h"

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
		newnode->next = newnode;
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
	duplicate = newnode->next;
	while(newnode && duplicate)
	{
		while(duplicate != NULL)
		{
			if(newnode->data == duplicate->data)
			{
				return (printf("Error with data\n"),0);
			}
			duplicate = duplicate->next;
		}
		duplicate = newnode->next;
	}
	return (1);
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



