/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_lit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 23:22:07 by mporras-          #+#    #+#             */
/*   Updated: 2022/07/28 23:22:24 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of delimited sections in a string using a character.
 *
 * This function counts the number of sections in the string 's' that are
 * delimited by the character 'c'. It considers only non-overlapping sections.
 *
 * @param s Pointer to the input string.
 * @param c Character used as delimiter.
 * @return Count of the delimited sections in the string.
 */
static inline size_t	ft_lit_count(char *s, char c)
{
	size_t			i;
	size_t			count;
	unsigned char	sem;

	i = 0;
	count = 0;
	sem = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (sem == 0)
				count++;
			sem ^= 1;
		}
		else
		{
			if (sem == 1)
				sem ^= 1;
		}
		i++;
	}
	return (count);
}

/**
 * @brief Iteratively removes delimited sections from a source string.
 *
 * This function goes through a source string 'src' and removes sections
 * delimited by the character 'c'. The resultant string is stored in 'rst'.
 *
 * @param src Double pointer to the source string.
 * @param rst Double pointer to the resultant string.
 * @param o_c Array containing positions in source and resultant strings.
 * @param c Character used as delimiter.
 */
static inline void	ft_iterate_remove(char **src, char **rst, int *o_c, char c)
{
	unsigned char	sem;

	sem = 0;
	while ((*src)[o_c[0]])
	{
		if ((*src)[o_c[0]] == c)
		{
			if (sem == 0)
				o_c[0] = o_c[0] + 1;
			else
			{
				(*rst)[o_c[1]] = (*src)[o_c[0]];
				o_c[0] = o_c[0] + 1;
				o_c[1] = o_c[1] + 1;
			}
			sem ^= 1;
			continue ;
		}
		(*rst)[o_c[1]] = (*src)[o_c[0]];
		o_c[0] = o_c[0] + 1;
		o_c[1] = o_c[1] + 1;
		if (sem == 1)
			sem ^= 1;
	}
}

/**
 * @brief Removes delimited sections from a string.
 *
 * This function creates a new string without the sections of the original
 * string 's' that are delimited by the character 'c'. The original string
 * remains unchanged.
 *
 * @param s Pointer to the original string.
 * @param c Character used as delimiter.
 * @return Pointer to the new string without delimited sections or NULL if
 *         unsuccessful.
 */
char	*ft_remove_lit(char *s, char c)
{
	size_t	newlen;
	char	*rst;
	int		o_c[2];

	if (!s)
		return (NULL);
	if (ft_count_char(s, c) == 0)
		return (NULL);
	newlen = ft_strlen(s) - ft_lit_count(s, c);
	if (newlen <= 0)
		return (NULL);
	rst = (char *)malloc(sizeof(char) * (newlen + 1));
	if (rst == NULL)
		return (NULL);
	rst[newlen] = '\0';
	ft_init_vector(&o_c[0], 0, 2);
	ft_iterate_remove(&s, &rst, &o_c[0], c);
	return (rst);
}
