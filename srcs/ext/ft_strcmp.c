/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:40:46 by mporras-          #+#    #+#             */
/*   Updated: 2022/07/06 22:42:56 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two strings.
 *
 * This function compares two strings 's1' and 's2' character by character.
 * If they are identical, it returns 0. Otherwise, it returns the difference
 * of the ASCII values of the first mismatched characters.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @return Integer representing the comparison result.
 */
int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	if (!s1[i] && !s2[i])
		return (0);
	if (s1[i])
		return (((unsigned char *)s1)[i]);
	if (s2[i])
		return (((unsigned char *)s2)[i]);
	return (0);
}

/**
 * @brief Compares two strings up to a specified length.
 *
 * Compares two strings 's1' and 's2' for exactly 'l1' and 'l2' characters
 * respectively.
 * Returns 0 if the lengths aren't equal or if the strings are identical up to
 * the specified length. Otherwise, returns the difference of the ASCII values
 * of the first mismatched characters.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @param l1 Length to compare from the first string.
 * @param l2 Length to compare from the second string.
 * @return Integer representing the comparison result.
 */
int	ft_strict_n_cmp(char *s1, char *s2, size_t l1, size_t l2)
{
	size_t	i;

	i = 0;
	if (l1 == 0 || l1 != l2)
		return (0);
	while (i + 1 < l1 && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

/**
 * @brief Strictly compares the entirety of two strings.
 *
 * Compares two strings 's1' and 's2'. Returns -1 if their lengths differ.
 * Otherwise, if they are identical, it returns 0. If not, it returns the
 * difference of the ASCII values of the first mismatched characters.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @return Integer representing the comparison result.
 */
int	ft_strict_cmp(char *s1, char *s2)
{
	size_t	i;
	size_t	l1;
	size_t	l2;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	i = 0;
	if (l1 != l2)
		return (-1);
	while (i + 1 < l1 && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

/**
 * @brief Compares two strings up to a specified length using a function.
 *
 * Compares two strings 's1' and 's2' character by character for up to 'n'
 * characters using the 'str_to' function to transform each character
 * before comparison.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @param n Maximum number of characters to compare.
 * @param str_to Function pointer to transform characters for comparison.
 * @return Integer representing the comparison result.
 */
int	ft_strncmp_fnc(char *s1, char *s2, size_t n, int (*str_to)(int))
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i + 1 < n && (s1[i] || s2[i]))
	{
		if (str_to(s1[i]) != str_to(s2[i]))
			return (str_to(s1[i]) != str_to(s2[i]));
		i++;
	}
	return (str_to(s1[i]) != str_to(s2[i]));
}

/**
 * @brief Checks if two strings are identical.
 *
 * Compares two strings 's1' and 's2' to see if they are exactly the same.
 * Returns TRUE if they match entirely, and FALSE otherwise.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @return t_bool indicating whether the strings are identical (TRUE)
 * or not (FALSE).
 */
t_bool	ft_match_cmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (FALSE);
		i++;
	}
	if (s1[i] != s2[i])
		return (FALSE);
	return (TRUE);
}
