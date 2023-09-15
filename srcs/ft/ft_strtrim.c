/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:34:20 by mporras-          #+#    #+#             */
/*   Updated: 2022/02/01 17:51:50 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Determines if a given character exists within a charset.
 *
 * This function checks whether the character 'c' exists within the
 * string 'charset'.
 *
 * @param c The character to check for.
 * @param charset The set of characters to compare against.
 * @return 1 if 'c' is found in 'charset', and 0 otherwise.
 */
static int	ft_trim_charset(char c, char const *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * @brief Calculates the start and end positions for trimming.
 *
 * This function determines the starting and ending indices within
 * the string 's1' that are surrounded by the characters in the 'set'.
 * The function calculates the indices and stores them in the 'fromto' array.
 *
 * @param s1 The string to analyze.
 * @param set The set of characters to trim.
 * @param fromto A pointer to an array of size 3.
 *        fromto[0]: Start index.
 *        fromto[1]: End index.
 *        fromto[2]: Length of the substring between the start and end index.
 */
static void	ft_trim_fromto(char const *s1, char const *set, size_t *fromto)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_trim_charset(s1[i], set) == 1)
		i++;
	fromto[0] = i;
	fromto[2] = len;
	fromto[1] = fromto[2] - 1;
	while (ft_trim_charset(s1[fromto[1]], set) == 1)
		fromto[1]--;
	if (fromto[0] == len)
	{
		fromto[2] = 0;
		fromto[1] = fromto[0] + 1;
	}
	else
		fromto[2] = (fromto[1] - fromto[0]) + 1;
	if (len == 0)
		fromto[2] = 0;
}

/**
 * @brief Creates a new string by trimming characters from the beginning and
 * end of the original string.
 *
 * This function returns a new string that omits characters from the beginning
 * and end of 's1' that match any character in 'set'. If 'set' is NULL,
 * the original string 's1' is returned.
 *
 * @param s1 The string to trim.
 * @param set The set of characters to trim.
 * @return A new, allocated string without the trim characters.
 *         Returns NULL if memory allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	fromto[3];
	char	*rst;

	if (!set)
		return ((char *)s1);
	if (!s1)
		return (NULL);
	i = 0;
	ft_trim_fromto(s1, set, &fromto[0]);
	rst = (char *)malloc(sizeof(char) * (fromto[2] + 1));
	if (rst == NULL)
		return (NULL);
	rst[fromto[2]] = '\0';
	if (fromto[2] == 0)
		return (rst);
	while (i < fromto[2])
	{
		rst[i] = s1[fromto[0]];
		i++;
		fromto[0]++;
	}
	return (rst);
}
