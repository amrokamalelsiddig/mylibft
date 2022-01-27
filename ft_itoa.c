/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <aelsiddi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:43:50 by aelsiddi          #+#    #+#             */
/*   Updated: 2022/01/02 02:17:57 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digit_count(long n)
{
	int		len;

	len = 0;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	long	n;
	char	*res;
	int		i;

	n = nb;
	i = digit_count(n);
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (res);
	res[i--] = '\0';
	if (n == 0)
	{
		res[0] = 48;
		return (res);
	}
	if (n < 0)
	{
		res[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		res[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (res);
}
