/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <aelsiddi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 04:14:26 by aelsiddi          #+#    #+#             */
/*   Updated: 2021/12/28 05:17:45 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	const char	*copy_src;	
	char		*copy_dst;
	int			i;

	i = 0;
	copy_dst = (char *) dst;
	copy_src = (char *) src;
	if (!(copy_src))
		return (NULL);
	while (i < (int)n)
	{
		copy_dst[i] = copy_src[i];
		i++;
	}
	return (copy_dst);
}
