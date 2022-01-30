/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <aelsiddi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 23:58:10 by aelsiddi          #+#    #+#             */
/*   Updated: 2022/01/30 22:42:51 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cpy_s1;
	unsigned char	*cpy_s2;
	size_t			i;

	i = 0;
	cpy_s1 = (unsigned char *)s1;
	cpy_s2 = (unsigned char *)s2;
	while (cpy_s1[i] == cpy_s2[i] && i < n - 1)
		i++;
	return (cpy_s1[i] - cpy_s2[i]);
}
