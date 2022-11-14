/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 08:34:11 by mthea             #+#    #+#             */
/*   Updated: 2022/11/06 16:35:17 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t c)
{
	const unsigned char	*chaine1;
	const unsigned char	*chaine2;
	size_t				i;

	chaine1 = (const unsigned char *) s1;
	chaine2 = (const unsigned char *) s2;
	i = 0;
	if (c == 0)
		return (0);
	while (i < c)
	{
		if (chaine1[i] != chaine2[i])
			return (chaine1[i] - chaine2[i]);
		i++;
	}
	return (0);
}
