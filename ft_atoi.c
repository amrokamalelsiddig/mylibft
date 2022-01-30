/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <aelsiddi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 13:34:11 by aelsiddi          #+#    #+#             */
/*   Updated: 2022/01/30 20:46:42 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				s;
	int				i;
	unsigned int	result;

	s = 1;
	i = 0;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = s * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = 10 * result + str[i] - '0';
		i++;
	}
	if (result > 2147483647 && s == 1)
		return (-1);
	if (result > 2147483648 && s == -1)
		return (0);
	return (result * s);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%d\n", ft_atoi("6846436464845876865"));
// 	printf("%d\n", atoi("684646463484587687687"));
// }