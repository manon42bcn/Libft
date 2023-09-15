/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:14:11 by mporras           #+#    #+#             */
/*   Updated: 2022/01/10 22:14:14 by mporras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the last occurrence of a character in a string.
 *
 * This function searches for the last occurrence of the character 'c'
 * (an unsigned char) in the string 's'. The function returns a pointer to
 * the matched character, or NULL if the character is not found.
 * If 'c' is the null character, the function returns a pointer to the
 * terminating null byte of 's'.
 *
 * @param s The string in which to search for the character.
 * @param c The character to search for.
 * @return A pointer to the matched character, or NULL if the character is
 *         not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*str;

	str = (char *)s;
	len = ft_strlen(str);
	while (len > 0)
	{
		if (str[len] == (char)c)
			return (&str[len]);
		len--;
	}
	if (str[len] == (char)c)
		return (&str[len]);
	return (NULL);
}
