/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <aelsiddi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 19:39:13 by aelsiddi          #+#    #+#             */
/*   Updated: 2021/12/24 20:20:23 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	len;

	i = -1;
	len = (ft_strlen(s));
	if (!s)
		return (NULL);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)(s + len));
		len--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*src2;

// 	src2 = "amro kamal";
// 	printf("orignal funcation output\n");
// 	printf("%s", ft_strrchr(src2, 'a'));
// 	return (0);
// }
