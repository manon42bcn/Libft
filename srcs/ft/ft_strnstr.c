/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:40:18 by mporras           #+#    #+#             */
/*   Updated: 2022/01/10 22:40:38 by mporras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates a substring in a string, considering a maximum length.
 *
 * This function searches for the substring 'needle' in the string 'haystack'
 * up to 'loc' characters. The function returns a pointer to the first character
 * of the first occurrence of 'needle' in 'haystack' or NULL if the substring
 * is not found. If 'needle' is an empty string, the function returns 'haystack'.
 *
 * @param haystack The string in which to search for the substring.
 * @param needle The substring to search for.
 * @param loc The maximum number of characters to compare in 'haystack'.
 * @return A pointer to the first character of the first occurrence of 'needle'
 *         in 'haystack', or NULL if 'needle' is not found.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t loc)
{
	size_t	i;
	size_t	k;
	size_t	len_needle;
	char	*sheaf;

	if (haystack == needle)
		return ((char *)haystack);
	i = 0;
	len_needle = ft_strlen(needle);
	sheaf = (char *)haystack;
	if (len_needle == 0)
		return (sheaf);
	while (sheaf[i] && i < loc)
	{
		if (sheaf[i] == needle[0])
		{
			k = 0;
			while (sheaf[i + k] && sheaf[i + k] == needle[k] && i + k < loc)
				k++;
			if (k == len_needle)
				return (&sheaf[i]);
		}
		i++;
	}
	return (NULL);
}
