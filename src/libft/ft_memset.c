/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:53:48 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/17 09:06:53 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*m;
	size_t			i;

	m = ptr;
	i = 0;
	while (i < n)
	{
		m[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
