/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:14:29 by vflorez           #+#    #+#             */
/*   Updated: 2023/11/23 16:29:58 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Add node at the end
struct node *add_node_end(struct node *ptr, int data)
{
	struct node *temp = malloc(sizeof(struct node));
	
	temp->data = data;
	temp->link = NULL;

	ptr->link = temp;
	return (temp);
}

//Add node at the beginning
void	**add_node_beginning(struct node **head, int data)
{
	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = data;
	ptr->link = NULL;

	ptr->link = *head;
	*head = ptr;
}

int main()
{
	//Create the first node
	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;
	
	struct node *ptr = head;
	ptr = add_node_end(ptr,98);
	ptr = add_node_end(ptr,3);
	ptr = add_node_end(ptr,67);

	int data = 10;
	add_node_beginning(&head,data);
	ptr = head;
	
	while(ptr != NULL)
	{
		printf("Data: %d\n", ptr->data);
		ptr = ptr ->link;
	}
return 0;
}