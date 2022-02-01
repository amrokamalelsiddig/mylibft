/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:42:56 by aelsiddi          #+#    #+#             */
/*   Updated: 2022/02/02 01:02:53 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned int	i;
	unsigned char	*copy_dst;
	unsigned char	*copy_src;

	i = -1;
	if (!dest && !src)
		return (0);
	copy_dst = (unsigned char *)dest;
	copy_src = (unsigned char *)src;
	if (copy_src < copy_dst && copy_dst < copy_src + len)
		while (++i < len)
			copy_dst[len - 1 - i] = copy_src[len - 1 - i];
	else
		while (++i < len)
			copy_dst[i] = copy_src[i];
	return (copy_dst);
}
