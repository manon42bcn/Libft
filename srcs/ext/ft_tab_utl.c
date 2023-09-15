/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_utl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:30:40 by mporras-          #+#    #+#             */
/*   Updated: 2022/07/28 18:38:47 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Frees a 2D string array.
 *
 * Iterates through each string in 'tab' and frees them. Finally,
 * it frees the 'tab' pointer and sets it to NULL.
 *
 * @param tab A 2D string array to be cleared.
 */
void	ft_clear_tabs(char **tab)
{
	size_t	i;

	i = -1;
	if (!tab)
		return ;
	while (tab[++i])
	{
		if (tab[i])
			free(tab[i]);
		tab[i] = NULL;
	}
	free(tab);
	tab = NULL;
}

/**
 * @brief Counts the number of strings in a 2D string array.
 *
 * Iterates through each string in 's' and counts them.
 *
 * @param s A 2D string array.
 * @return The number of strings in the array.
 */
size_t	ft_count_tab(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * @brief Sorts a 2D string array in ascending order.
 *
 * Iterates through each string in 'tab' and sorts them using the
 * `ft_strcmp` function.
 *
 * @param tab A 2D string array to be sorted.
 */
void	ft_sort_str_tab(char **tab)
{
	int		i;
	int		k;
	char	*temp;

	i = 0;
	if (!tab)
		return ;
	while (tab[i] != 0)
	{
		k = i;
		while (tab[k] != 0)
		{
			if (ft_strcmp(tab[i], tab[k]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[k];
				tab[k] = temp;
			}
			k++;
		}
		i++;
	}
}
