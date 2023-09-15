/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:19:41 by mporras           #+#    #+#             */
/*   Updated: 2022/01/10 22:19:43 by mporras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares up to 'n' characters of two strings.
 *
 * This function compares the two strings 's1' and 's2' up to 'n' characters.
 * The comparison stops if a difference is found, if a null-terminator is
 * reached, or if 'n' characters have been compared. If 'n' is zero, the
 * function returns zero.
 *
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @param n The maximum number of characters to compare.
 * @return An integer indicating the result of the comparison:
 *         - A positive integer if 's1' is greater than 's2'.
 *         - Zero if 's1' is equal to 's2'
 *         (considering 'n' characters or a null-terminator).
 *         - A negative integer if 's1' is less than 's2'.
 */
int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i + 1 < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
