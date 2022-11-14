/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:07:56 by mthea             #+#    #+#             */
/*   Updated: 2022/11/05 17:30:34 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{	
	if (c < 'a' && c > 'z')
		return (c);
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}