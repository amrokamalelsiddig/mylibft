/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:45:45 by aelsiddi          #+#    #+#             */
/*   Updated: 2022/02/02 00:45:49 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int			i;
	char		*p;
	size_t		z;

	z = 0;
	i = start;
	if (!(s))
		return (NULL);
	if ((!s) || (start > ft_strlen(s)))
		len = 0;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	while (s[i] && z < len)
	{
		p[z] = s[i];
		i++;
		z++;
	}
	p[z] = '\0';
	return (p);
}
