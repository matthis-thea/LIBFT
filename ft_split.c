/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:59:44 by mthea             #+#    #+#             */
/*   Updated: 2022/11/14 17:52:29 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
static char	**free_malloc(char **str, int pos)
{
	while (pos > 0)
	{
		free(str[pos]);
	}
	return (0);
}
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

static char **ft_alloc_totale(const char *s, char c, char **tab)
{
	int		i;
	int compteur;
	int	j;

	i = 0;
	j = -1;
	compteur = 0;
	if (s[i] == c)
		i++;
	while (s[i])
	{	
		if (s[i] != c)
			compteur++;
		if (s[i - 1] != c && s[i] == c && s[i + 1] != c)
		{
			tab[++j] = (char *) malloc(sizeof(char) * (compteur + 1));
			compteur = 0;
			if (tab[j] == NULL)
				return (free_malloc(tab, j - 1));
		}
		i++;
	}
	if (compteur > 0)
		tab[++j] = (char *) malloc(sizeof(char) * (compteur + 1));
	return (tab);
}
static char **ft_placement_mots(const char *s, char c, char **tab)
{
	int	i;
	int	j;
	int	compteur;

	i = 0;
	j = 0;
	compteur = 0;
	if (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
			tab[j][compteur] = s[i];
		if (s[i - 1] != c && s[i] == c && s[i + 1] != c)
		{
			tab[j][compteur] = 0;
			j++;
			compteur = -1;
		}
		i++;
		compteur++;
	}
	tab[j][compteur] = 0;
	return (tab);
}
char **ft_split(char const *s, char c)
{
	char **tab;

	tab = (char **) malloc(sizeof(char *) * ft_alloc_nb_col(s, c));
	if (ft_alloc_totale(s, c, tab) == 0)
		return (0);
	tab = ft_alloc_totale(s, c, tab);
	tab = ft_placement_mots(s,c,tab);
	return (tab);
}
