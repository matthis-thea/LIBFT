/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:14:52 by mthea             #+#    #+#             */
/*   Updated: 2022/11/05 17:04:15 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *str, int value, size_t n)
{
	size_t			i;
	char			*chaine;

	chaine = str;
	i = 0;
	while (i < n)
	{
		chaine[i] = value;
		i++;
	}
	return (chaine);
}
