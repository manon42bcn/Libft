/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 21:33:26 by mporras           #+#    #+#             */
/*   Updated: 2022/01/10 21:33:29 by mporras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locate the first occurrence of a character in a string.
 *
 * The function scans the string 's' for the first occurrence of the
 * character 'c'.
 * If 'c' is found, a pointer to the first occurrence is returned.
 * If 'c' is not in the string, the function returns NULL.
 *
 * @param s The string to be scanned.
 * @param c The character to be located.
 * @return A pointer to the located character or NULL if the character
 * does not appear in the string.
 */
char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (char)c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}
