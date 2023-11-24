/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:45:43 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/12 14:47:25 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int firstc)
{
	int	i;

	i = 0;
	while (*(s + i) != '\0' && *(s + i) != (char)firstc)
		i++;
	if (*(s + i) == (char)firstc)
		return ((char *)s + i);
	else
		return (NULL);
}
