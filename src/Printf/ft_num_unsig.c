/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_unsig.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:55:38 by vflorez           #+#    #+#             */
/*   Updated: 2023/08/01 18:58:24 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num_unsig(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
	{
		len += ft_num_unsig(n / 10);
		len += ft_num_unsig(n % 10);
	}
	else
		len += ft_putchar(n + '0');
	return (len);
}
