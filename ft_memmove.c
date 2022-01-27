/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <aelsiddi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 17:04:50 by aelsiddi          #+#    #+#             */
/*   Updated: 2021/12/24 18:57:42 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*copy_src;
	unsigned char	*copy_dst;

	copy_src = (unsigned char *)src;
	copy_dst = (unsigned char *)dst;
	i = 0;
	if (src < dst)
	{
		while (len)
		{	
			--len;
			copy_dst[len] = copy_src[len];
		}
	}
	else
	{
		while (copy_src[i] && i < len)
		{
			copy_dst[i] = copy_src[i];
			i++;
		}
	}
	return (copy_dst);
}
