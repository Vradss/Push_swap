/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:09:21 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/20 14:02:26 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_char(int num)
{
	int	count;

	count = 0;
	if (num != 0)
	{
		if (num < 0)
		{
			num = num * (-1);
			count++;
		}
		while (num != 0)
		{
			num = num / 10;
			count++;
		}
	}
	else
		count = 1;
	return (count);
}

char	*ft_itoa(int n)
{
	int			len;
	long int	conv;
	char		*str;

	len = count_char(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	conv = n;
	if (conv < 0)
	{
		str[0] = '-';
		conv = -conv;
	}
	if (conv == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (conv)
	{
		str[len] = ((conv % 10) + '0');
		conv = conv / 10;
		len--;
	}
	return (str);
}
