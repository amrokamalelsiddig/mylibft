/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <aelsiddi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 00:27:52 by aelsiddi          #+#    #+#             */
/*   Updated: 2021/12/28 05:12:36 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
