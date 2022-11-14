/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:27:33 by mthea             #+#    #+#             */
/*   Updated: 2022/11/06 14:26:35 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

void	*ft_memcpy(void *dst, const	void *src, size_t n)
{
	char			*destination;
	const char		*source;
	size_t			i;

	destination = dst;
	source = src;
	i = 0;
	if (source == 0 && destination == 0)
		return (destination);
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}
