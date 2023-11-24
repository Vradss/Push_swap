/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 18:51:54 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/22 15:12:13 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *cuts)
{
	char	*trim;
	size_t	start;
	size_t	end;

	if (!s || !cuts)
		return (NULL);
	start = 0;
	end = ft_strlen(s);
	while (s[start] && ft_strchr(cuts, s[start]))
		start++;
	while (end > 0 && ft_strchr(cuts, s[end - 1]))
		end --;
	if (end < start)
	{
		trim = (char *)malloc(sizeof(char));
		trim[0] = '\0';
		return (trim);
	}
	else
		trim = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trim)
		return (NULL);
	ft_strlcpy (trim, &s[start], end - start + 1);
	trim [end - start] = '\0';
	return (trim);
}
