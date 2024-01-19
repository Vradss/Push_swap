/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 20:13:55 by vflorez           #+#    #+#             */
/*   Updated: 2024/01/18 18:20:19 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	if (needle[0] == '\0')
		return ((char *)haystack);
	h = 0;
	while (h < len && haystack[h])
	{
		n = 0;
		while (h < len && needle[n] && haystack[h] && needle[n] == haystack[h])
		{
			++n;
			++h;
		}
		if (needle[n] == '\0')
			return ((char *)&haystack[h - n]);
		h = h - n + 1;
	}
	return (0);
}
