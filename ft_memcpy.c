/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 01:01:00 by aelsiddi          #+#    #+#             */
/*   Updated: 2022/02/02 01:02:30 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*copy_src;
	char		*copy_dst;
	int			i;

	if (!(dst) && !(src))
		return (NULL);
	i = 0;
	copy_dst = (char *)dst;
	copy_src = (char *)src;
	while (i < (int)n)
	{
		copy_dst[i] = copy_src[i];
		i++;
	}
	return (copy_dst);
}
