/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:39:08 by vflorez           #+#    #+#             */
/*   Updated: 2023/08/04 12:09:59 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_upper(size_t nbr)
{
	char		*hex;
	static int	i;

	i = 0;
	hex = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		ft_hex_upper(nbr / 16);
		nbr = nbr % 16;
	}
	i++;
	ft_putchar(hex[nbr]);
	return (i);
}

int	ft_hex(size_t nbr)
{
	char		*hex;
	static int	i;

	i = 0;
	hex = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_hex(nbr / 16);
		nbr = nbr % 16;
	}
	i++;
	ft_putchar(hex[nbr]);
	return (i);
}

int	ft_pointer(void *p)
{
	int		len;
	size_t	num;

	len = 0;
	num = (size_t)p;
	len = write (1, "0x", 2);
	len += ft_hex(num);
	return (len);
}
