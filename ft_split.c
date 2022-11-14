/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:59:44 by mthea             #+#    #+#             */
/*   Updated: 2022/11/14 23:39:49 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static void	free_malloc(char **str, int pos)
{
	int	i;

	i = 0;
	while (i++ < pos)
		free(str[i]);
	free(str);
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

static char	**ft_alloc_totale(const char *s, char c, char **tab)
{
	int		i;
	int		compteur;
	int		j;

	i = 0;
	j = 0;
	compteur = 0;
	while (s[i])
	{	
		if (s[i] != c)
			compteur++;
		else if (s[i - 1] != c && i > 0)
		{
			tab[j] = malloc(sizeof(char) * (compteur + 1));
			if (tab[j] == NULL)
				return (0);
			compteur = 0;
			j++;
		}
		if (s[i + 1] == '\0' && s[i] != c)
			tab[j] = malloc(sizeof(char) * (compteur + 1));
		i++;
	}
	return (tab);
}

static char	**ft_placement_mots(const char *s, char c, char **tab)
{
	int	i;
	int	j;
	int	compteur;

	i = 0;
	j = 0;
	compteur = 0;
	while (s[i])
	{
		if (s[i] != c)
			tab[j][compteur++] = s[i];
		else if (s[i - 1] != c && i > 0)
		{
			tab[j][compteur] = 0;
			j++;
			compteur = 0;
		}
		if (s[i + 1] == '\0' && s[i] != c)
			tab[j][compteur] = 0;
		i++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		taille;

	taille = ft_alloc_nb_col(s, c);
	if (*s == NULL)
	{
		tab = malloc(sizeof(char *) * 1);
		if (tab == NULL)
			return (NULL);
		tab[0] = 0;
		return (tab);
	}
	tab = malloc(sizeof(char *) * (taille + 1));
	if (tab == NULL)
		return (0);
	if (ft_alloc_totale(s, c, tab) == NULL)
	{
		free(tab);
		return (tab);
	}
		tab = ft_alloc_totale(s, c, tab);
		tab = ft_placement_mots(s, c, tab);
	tab[taille] = 0;
	return (tab);
}
