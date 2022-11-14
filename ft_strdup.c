/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:56:23 by mthea             #+#    #+#             */
/*   Updated: 2022/11/06 19:49:13 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *source)
{
	char	*str;
	int		i;

	str = NULL;
	i = 0;
	while (source[i])
		i++;
	str = (char *) malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (0);
	i = 0;
	while (source[i])
	{
		str[i] = source[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
