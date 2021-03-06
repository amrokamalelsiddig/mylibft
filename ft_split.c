/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:49:44 by aelsiddi          #+#    #+#             */
/*   Updated: 2022/02/02 01:17:17 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		cont(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s == c && j == 1)
		{
			i++;
			j = 0;
		}
		else if (*s != c)
			j = 1;
		s++;
	}
	return (i + 1);
}

char	*add_word(char const *s, int i, int j)
{
	char	*str;
	char	*str1;
	int		k;

	k = 0;
	str1 = (char *)s;
	str = (char *)malloc((i - j + 1));
	if (!(str))
		return (NULL);
	while (k < (i - j))
	{
		str[k] = str1[j + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!(s))
		return (NULL);
	result = malloc(sizeof(char**) * (cont(s, c) + 1));
	if (!result || !s)
		return (NULL);
	while (s[i])
	{
		j = i;
		while (s[i] != c && s[i])
			i++;
		if (i != j)
			result[k++] = add_word(s, i, j);
		while (s[i] && s[i] == c)
			i++;
	}
	result[k] = 0;
	return (result);
}
