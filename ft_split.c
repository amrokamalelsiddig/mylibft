/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsiddi <aelsiddi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 21:20:42 by aelsiddi          #+#    #+#             */
/*   Updated: 2022/01/02 02:02:35 by aelsiddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int	number_of_sep(char const *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == c)
			j++;
		i++;
	}
	return (j);
}

//amro;kamal
int	count_delimiter(char const *str, char c)
{
	int	i;
	int	z;

	z = 0;
	i = 0;
	while (str[z])
	{
		if (str[z] == c && str[z + 1] != c && str[z - 1] != c)
			i++;
		z++;
	}
	return (i + 1);
}

char **allocate_words(const *str, char c, int k)
{
	char	**ptr;
	int		i = 0;
	int 	j = 0;
	int 	e = 0
	ptr = (char)malloc(sizeof(char) * (k));
	while (j < strlen(str))
	{
		i = 0;
		while (str[i] != c && str[i + 1] !=c )
			i++;
		else 
			*ptr[e] = ft_substr(str, j - i ,i + 1);
		j++;
	}

}

int main(void)
{
	printf("%d",count_delimiter(",,,,,,,,amro,k,a,m,a,l",','));
	return (0);
}

// 