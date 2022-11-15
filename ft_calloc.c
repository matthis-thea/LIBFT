/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:16:27 by mthea             #+#    #+#             */
/*   Updated: 2022/11/15 08:21:47 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	int		i;
	char	*pointeur;

	i = 0;
	if ((elementCount && elementSize == SIZE_MAX))
		return (0);
	pointeur = (char *) malloc(elementCount * elementSize);
	if (pointeur == NULL)
		return (0);
	while (pointeur[i])
	{
		pointeur[i] = 0;
		i++;
	}
	return (pointeur);
}
