/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:16:21 by mthea             #+#    #+#             */
/*   Updated: 2022/11/14 11:57:33 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static unsigned int	ft_strlentaille(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = NULL;
	i = 0;
	if (start >= ft_strlentaille(s) || s == NULL)
	{
		str = (char *) malloc(sizeof(char) * 1);
		str[i] = 0;
		return (str);
	}
	if (len >= SIZE_MAX)
		str = (char *) malloc(sizeof(char) * (ft_strlentaille(s) + 1));
	else
		str = (char *) malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (0);
	while (s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = 0;
	return (str);
}
