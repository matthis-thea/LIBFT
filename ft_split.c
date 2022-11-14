/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:59:44 by mthea             #+#    #+#             */
/*   Updated: 2022/11/14 14:10:01 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_alloc_nb_col(const char *s, char c)
{
	int	i;
	int	compteur;

	compteur = 1;
	i = 0;
	if (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			compteur++;
		i++;
	}
	if (s[i - 1] == c)
		compteur--;
	return (compteur);
}
static int ft_parcours_chaine(const char *s, char c)
{
	int compteur;
	int	i;

	i = 0;
	compteur = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (compteur);
		i++;
		compteur++;
	}
	return(0);
}
static int alloc_totale(const char *s, char c)
{
	char	**tab;
	int		i;

	tab = (char **) malloc(sizeof(char *) * ft_alloc_nb_col(s, c));
	if (tab == NULL)
		return (0);
	while (s1[i])
	{
		while ()
		{
			printf("%d",);
		}
		i++;
	}
	
}

int	main(void)
{
	printf("%d", alloc_totale(";je;;;veux;;manger;", ';'));
	return (0);
}
