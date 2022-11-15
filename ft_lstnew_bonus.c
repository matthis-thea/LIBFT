/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:03:32 by mthea             #+#    #+#             */
/*   Updated: 2022/11/15 10:19:50 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_lstnew(void * content)
{
	t_list *liste;
	liste = (t_list *) malloc(sizeof(t_list));
	liste->content = content;
	liste->next = 0;
	return(liste->content);
}
