/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_utl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:44:45 by mporras-          #+#    #+#             */
/*   Updated: 2022/07/28 18:37:55 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes the length of a string up to the first occurrence of 'c'.
 *
 * This function calculates the length of the string 's' until it encounters
 * the character 'c'. If 'c' is not found in 's', it returns the full length
 * of the string. Returns 0 if the string pointer is NULL.
 *
 * @param s Pointer to the input string.
 * @param c Character up to which the length is computed.
 * @return Length of the string up to the first occurrence of 'c'.
 */
size_t	ft_strlenchar(const char *s, char c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

/**
 * @brief Finds the position of the character 'c' in the string 's'.
 *
 * This function returns the index of the first occurrence of the character 'c'
 * in the string 's'. If 'c' is not found, it returns -1. If the string pointer
 * is NULL, it also returns -1.
 *
 * @param s Pointer to the input string.
 * @param c Character to be searched in the string.
 * @return Index of the first occurrence of 'c' or -1 if not found.
 */
int	ft_strict_lenchar(const char *s, char c)
{
	int	i;

	i = -1;
	if (!s)
		return (-1);
	while (s[++i])
	{
		if (s[i] == c)
			return (i);
	}
	return (-1);
}

/**
 * @brief Computes the length of a string, but not exceeding 'max'.
 *
 * This function calculates the length of the string 's', but stops counting
 * if the length surpasses the value of 'max'. Returns 0 if the string pointer
 * is NULL.
 *
 * @param s Pointer to the input string.
 * @param max Maximum length to be computed.
 * @return Length of the string up to a maximum of 'max'.
 */
size_t	ft_strlen_max(const char *s, size_t max)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (i > max)
			break ;
		i++;
	}
	return (i);
}

/**
 * @brief Counts occurrences of the character 'c' in the string 's'.
 *
 * This function calculates how many times the character 'c' appears in
 * the string 's'.
 *
 * @param s Pointer to the input string.
 * @param c Character to be counted.
 * @return Number of times 'c' appears in 's'.
 */
size_t	ft_count_char(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

/**
 * @brief Retrieves the last character in the string 's'.
 *
 * This function returns the last character of the string 's'. If the string
 * is empty or the pointer is NULL, it returns 0.
 *
 * @param s Pointer to the input string.
 * @return The last character of the string or 0 if the string is NULL/empty.
 */
char	ft_last_char(char *s)
{
	size_t	i;
	char	c;

	if (!s)
		return (0);
	i = 0;
	c = 0;
	while (s[i])
	{
		c = s[i];
		i++;
	}
	return (c);
}
