/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:49:55 by vflorez           #+#    #+#             */
/*   Updated: 2023/10/30 17:00:21 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_interpret(char format, va_list args);

int	ft_printf(char const *format, ...)
{
	int		total_length;
	va_list	args;

	va_start(args, format);
	total_length = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			total_length += ft_interpret(*format, args);
		}
		else
			total_length += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (total_length);
}

static int	ft_interpret(char format, va_list args)
{
	if (format == '%')
		return (ft_putchar('%'));
	else if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_pointer(va_arg(args, void *)));
	else if (format == 'd' | format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_num_unsig(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_hex(va_arg(args, unsigned int)));
	else if (format == 'X')
		return (ft_hex_upper(va_arg(args, unsigned int)));
	return (0);
}
