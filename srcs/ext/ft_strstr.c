/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:19:56 by mporras-          #+#    #+#             */
/*   Updated: 2022/07/28 18:38:36 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the last character of the first occurrence of a substring
 *        within a string, considering a length constraint.
 *
 * Searches for the first occurrence of the substring 'needle' within the
 * string 'haystack', up to a maximum of 'loc' characters.
 * If the substring is found, returns a pointer to the last character of
 * the first occurrence in 'haystack'. Otherwise, returns NULL.
 *
 * @param haystack The string to be searched.
 * @param needle The substring to be located.
 * @param loc Maximum number of characters to be searched in 'haystack'.
 * @return A pointer to the last character of the found substring or NULL
 * if not found.
 */
char	*ft_strnstr_end(const char *haystack, const char *needle, size_t loc)
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
				return (&sheaf[i + k - 1]);
		}
		i++;
	}
	return (NULL);
}

/**
 * @brief Locates the starting index of the first occurrence of a substring
 *        within a string, considering a length constraint.
 *
 * Searches for the first occurrence of the substring 'needle' within the
 * string 'haystack', up to a maximum of 'len' characters.
 * If the substring is found, returns the starting index of the first
 * occurrence in 'haystack'. Otherwise, returns 0.
 *
 * @param haystack The string to be searched.
 * @param needle The substring to be located.
 * @param len Maximum number of characters to be searched in 'haystack'.
 * @return The starting index of the found substring or 0 if not found.
 */
size_t	ft_strnstr_len(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;
	size_t	len_needle;
	char	*sheaf;

	if (haystack == needle)
		return (len);
	i = 0;
	len_needle = ft_strlen(needle);
	sheaf = (char *)haystack;
	if (len_needle == 0)
		return (0);
	while (sheaf[i] && i < len)
	{
		if (sheaf[i] == needle[0])
		{
			k = 0;
			while (sheaf[i + k] && sheaf[i + k] == needle[k] && i + k < len)
				k++;
			if (k == len_needle)
				return (i);
		}
		i++;
	}
	return (0);
}
