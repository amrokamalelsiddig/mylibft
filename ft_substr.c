/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <aelsiddi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 05:20:30 by aelsiddi          #+#    #+#             */
/*   Updated: 2022/01/29 21:32:04 by aelsiddi         ###   ########.fr       */
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
