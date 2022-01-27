/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <aelsiddi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:49:36 by aelsiddi          #+#    #+#             */
/*   Updated: 2021/12/24 21:20:19 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	dest[50];
// 	char	*src;
// 	int		size;
// 	char	dest2[50];
// 	char	*src2;
// 	int		size2;
// 	src = "amro kamal";
// 	size = 5;
// 	printf("my funcation output\n");
// 	printf("len : %lu\n", ft_strlcpy(dest, src, size));
// 	printf(".dest = %s.\n\n", dest);
// 	src2 = "amro kamal";
// 	size2 = 5;
// 	printf("orignal funcation output\n");
// 	printf("len : %zu\n", strlcpy(dest2, src2, size2));
// 	printf(".dest = %s.\n\n", dest2);
// }
