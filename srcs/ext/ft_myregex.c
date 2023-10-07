/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_myregex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:28:32 by mporras-          #+#    #+#             */
/*   Updated: 2023/10/07 19:28:35 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Processes a wildcard pattern during regex matching.
 *
 * The function checks for the wildcard '*' in the pattern and attempts to find
 * a matching sequence in the haystack.
 *
 * @param haystack The input string to be searched.
 * @param pattern The pattern to match.
 * @param it Array containing indices for navigating haystack and pattern.
 * @param len_h_p Array containing the lengths of haystack and pattern.
 * @return Returns TRUE if a match is found, otherwise FALSE.
 */
static inline int	ft_regex_wc(char *haystack,
	char *pattern, size_t *it, size_t *len_h_p)
{
	if (it[1] < len_h_p[1])
	{
		it[1] += 1;
		while (haystack[it[0]] && haystack[it[0]] != pattern[it[1]])
			it[0] += 1;
		if (it[0] == 0 && it[1] > 0)
		{
			if (it[1] < len_h_p[1] && it[0] < len_h_p[0])
			{
				it[1] -= 1;
				it[0] += 1;
			}
		}
		if ((it[1] == len_h_p[1] && it[0] != len_h_p[0])
			|| (len_h_p[0] - it[0] < len_h_p[1] - it[1]))
			return (FALSE);
		return (TRUE);
	}
	else
		return (TRUE);
}

/**
 * @brief Traverses the pattern backwards to find the previous wildcard.
 *
 * @param pattern The pattern to traverse.
 * @param it Index for navigating the pattern.
 */
static inline void	ft_back_pattern(char *pattern, size_t *it)
{
	while (it[1] > 0)
	{
		if (pattern[it[1]] == '*')
			break ;
		it[1] -= 1;
	}
}

/**
 * @brief Processes a literal pattern during regex matching.
 *
 * The function attempts to match a literal sequence from the pattern in the
 * haystack.
 *
 * @param haystack The input string to be searched.
 * @param pattern The pattern to match.
 * @param it Array containing indices for navigating haystack and pattern.
 * @param len_h_p Array containing the lengths of haystack and pattern.
 * @return Returns IS_TRUE if a match is found, otherwise IS_FALSE.
 */
static inline int	ft_regex_lit(char *haystack, char *pattern,
	size_t *it, size_t *len_h_p)
{
	if (haystack[it[0]] != pattern[it[1]])
		return (FALSE);
	while (haystack[it[0]] && pattern[it[1]] && pattern[it[1]] != '*')
	{
		if (haystack[it[0]] != pattern[it[1]])
		{
			if (it[1] < len_h_p[1] && it[0] < len_h_p[0])
			{
				ft_back_pattern(pattern, it);
				return (TRUE);
			}
			return (FALSE);
		}
		it[0] += 1;
		it[1] += 1;
	}
	if ((it[1] == len_h_p[1] && it[0] != len_h_p[0])
		|| (len_h_p[0] - it[0] < len_h_p[1] - it[1]))
		return (FALSE);
	return (TRUE);
}

/**
 * @brief Initializes the lengths of haystack and pattern, and sets iterators.
 *
 * @param haystack The input string to be searched.
 * @param pattern The pattern to match.
 * @param lens Array to store lengths of haystack and pattern.
 * @param iter Array to initialize iterators for haystack and pattern.
 */
static void	ft_init_lens(char *haystack,
							char *pattern, size_t *lens, size_t *iter)
{
	lens[1] = ft_strlen(pattern);
	lens[0] = ft_strlen(haystack);
	iter[1] = 0;
	iter[0] = 0;
}

/**
 * @brief Matches a pattern against a haystack using regex rules.
 *
 * The function attempts to match a given pattern (which can contain wildcards)
 * against a haystack string.
 *
 * @param haystack The input string to be searched.
 * @param pattern The pattern to match.
 * @return Returns TRUE if a complete match is found, otherwise FALSE.
 */
t_bool	ft_myregex(char *haystack, char *pattern)
{
	size_t	len_h_p[2];
	size_t	i_h_p[2];

	ft_init_lens(haystack, pattern, &len_h_p[0], &i_h_p[0]);
	if (len_h_p[1] > len_h_p[0])
		return (FALSE);
	while (pattern[i_h_p[1]])
	{
		if (pattern[i_h_p[1]] == '*')
		{
			if (ft_regex_wc(haystack, pattern, &i_h_p[0], &len_h_p[0])
				== FALSE)
				return (FALSE);
		}
		else
		{
			if (ft_regex_lit(haystack, pattern, &i_h_p[0], &len_h_p[0])
				== FALSE)
				return (FALSE);
		}
		if (i_h_p[1] == len_h_p[1] && i_h_p[0] == len_h_p[0])
			return (TRUE);
	}
	return (FALSE);
}
