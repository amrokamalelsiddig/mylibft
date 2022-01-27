/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <aelsiddi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 04:42:48 by aelsiddi          #+#    #+#             */
/*   Updated: 2021/12/24 15:28:43 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*largestring = "Foo Bar Baz";
// 	const char	*smallstring = "Bar";
// 	char		*ptr;
// 	const char	*largestring2 = "Foo Bar Baz";
// 	const char	*smallstring2 = "Bar";
// 	char		*ptr2;

// 	ptr = strnstr(largestring, smallstring, 8);		
// 	printf("output of original func : %s\n",ptr);
// 	ptr2 = ft_strnstr(largestring2, smallstring2, 8);	
// 	printf("output of my func : %s",ptr2);
// 	return(0);
// }