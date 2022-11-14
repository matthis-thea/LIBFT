/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 08:53:10 by mthea             #+#    #+#             */
/*   Updated: 2022/11/11 14:30:34 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

static int	ft_strlenn(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_needle;

	len_needle = ft_strlenn(needle);
	i = 0;
	j = 0;
	if (len_needle <= 0)
		return ((char *)&haystack[j]);
	while (i < len && haystack[i])
	{	
		if (needle[j] == haystack[i])
		{
			while (needle[j] && needle[j] == haystack[i + j] && (i + j) < len)
				j++;
		}
		if (j == len_needle)
			return ((char *)&haystack[i]);
		i++;
		j = 0;
	}
	return (0);
}
