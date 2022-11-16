/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:16:27 by mthea             #+#    #+#             */
/*   Updated: 2022/11/15 14:55:27 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	int		i;
	char	*pointeur;

	i = 0;
	if ((elementCount && elementSize == __SIZE_MAX__))
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
