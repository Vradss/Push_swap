/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:46:16 by vflorez           #+#    #+#             */
/*   Updated: 2023/08/03 14:41:47 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

//Main
int		ft_printf(char const *format, ...);

//Utils
int		ft_putchar(int c);
int		ft_putstr(char *str);
size_t	ft_strlen(const char *str);
int		ft_hex(size_t nbr);
int		ft_pointer(void *p);
int		ft_putnbr(int n);
int		ft_num_unsig(unsigned int n);
int		ft_hex_upper(size_t nbr);

#endif