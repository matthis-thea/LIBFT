/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:16:27 by mthea             #+#    #+#             */
/*   Updated: 2022/11/18 14:51:02 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	int		i;
	void	*pointeur;

	i = 0;
	pointeur = malloc(elementCount * elementSize);
	if (!pointeur)
		return (0);
	ft_bzero(pointeur, (elementCount * elementSize));
	return (pointeur);
}
