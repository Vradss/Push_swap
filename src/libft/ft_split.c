/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:51:47 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/26 15:57:15 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_substr(const char *s, char separator)
{
	int	count;

	count = 0;
	while (s && *s)
	{
		while (*s == separator)
			s++;
		if (*s)
			count++;
		while (s && *s && *s != separator)
			s++;
	}
	return (count);
}

static void	ft_free(char **memry, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(memry[i]);
		i++;
	}
	free(memry);
	return ;
}

static void	create_substr(char *str, char **arr, char separator, int subs)
{
	int		i;
	char	*end;

	i = 0;
	if ((subs > 0) && *str)
	{
		while (i < (subs - 1))
		{
			end = ft_strchr(str, separator);
			arr[i] = ft_substr(str, 0, (end - str));
			if (!arr[i])
			{
				ft_free(arr, i);
				return ;
			}
			while (*end == separator)
				end++;
			str = end;
			i++;
		}
		arr[i++] = ft_strdup(str);
	}
	arr[i] = 0;
}

char	**ft_split(char const *s, char separator)
{
	char	*str;
	char	trm[2];
	char	**arr;
	int		subs;

	if (!s)
		return (0);
	trm[0] = separator;
	trm[1] = 0;
	str = ft_strtrim(s, trm);
	if (!str)
		return (0);
	subs = count_substr(str, separator);
	arr = (char **)malloc(sizeof(char *) * (subs + 1));
	if (!arr)
		return (0);
	create_substr(str, arr, separator, subs);
	free (str);
	return (arr);
}
