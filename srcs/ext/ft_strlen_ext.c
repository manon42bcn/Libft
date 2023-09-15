/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_ext.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 22:46:19 by mporras-          #+#    #+#             */
/*   Updated: 2023/06/09 22:46:19 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character belongs to a given charset.
 *
 * This function iterates through the given charset and determines
 * if the character 'c' is a part of it.
 *
 * @param c The character to check.
 * @param charset The set of characters to check against.
 * @return TRUE if 'c' is in 'charset', otherwise FALSE.
 */
t_bool	ft_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (TRUE);
		i++;
	}
	return (FALSE);
}

/**
 * @brief Computes the length of a string until a character from a
 * given charset is found.
 *
 * Iterates through the string 's' and returns its length up to the
 * first occurrence of any character from 'charset'.
 *
 * @param s The string to be analyzed.
 * @param charset The set of characters to check against.
 * @return The length of 's' up to the first character from 'charset'.
 *         Returns the full length if no such character is found.
 */
size_t	ft_len_charset(char const *s, char *charset)
{
	size_t	rst;

	rst = 0;
	while (s[rst])
	{
		if (ft_is_charset(s[rst], charset) == TRUE)
			return (rst);
		rst++;
	}
	return (rst);
}
