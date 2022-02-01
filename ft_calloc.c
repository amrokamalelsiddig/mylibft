/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:43:48 by aelsiddi          #+#    #+#             */
/*   Updated: 2022/02/02 00:43:51 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*r;

	if (!count || !size)
		return (malloc(0));
	r = malloc(size * count);
	if (!r)
		return (NULL);
	ft_bzero(r, size * count);
	return (r);
}
