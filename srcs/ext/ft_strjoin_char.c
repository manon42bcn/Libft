/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 01:25:20 by mporras           #+#    #+#             */
/*   Updated: 2022/06/03 22:10:10 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Joins two strings with a specified character separator.
 *
 * This function creates a new string by joining the strings 's1' and 's2'
 * and placing the character 'sep' between them.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @param sep The separator character.
 * @return A newly allocated string containing the concatenation of s1, sep,
 * and s2.
 */
char	*ft_strjoin_char(char const *s1, char const *s2, char sep)
{
	char	*rst;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2 || !sep)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	rst = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 2));
	if (rst == NULL)
		return (NULL);
	ft_memcpy(rst, s1, len_s1);
	rst[len_s1] = sep;
	ft_memcpy(&rst[len_s1 + 1], s2, len_s2);
	rst[len_s1 + len_s2 + 1] = '\0';
	return (rst);
}

/**
 * @brief Joins two strings with a separator and optionally frees them.
 *
 * Creates a new string by joining the strings pointed by 's1' and 's2',
 * inserting the character 'sep' between them. Depending on the value of 'clean',
 * it may free either or both of the input strings.
 *
 * @param s1 Pointer to the first string.
 * @param s2 Pointer to the second string.
 * @param sep The separator character.
 * @param clean An integer indicating which strings to free:
 *              0 = free both, 1 = free s1, 2 = free s2.
 * @return A newly allocated string containing the concatenation.
 */
char	*ft_strjoin_clean_char(char **s1, char **s2, char sep, int clean)
{
	char	*rst;
	size_t	len_s1;
	size_t	len_s2;

	if (!*s1 && !*s2)
		return (NULL);
	len_s1 = ft_strlen(*s1);
	len_s2 = ft_strlen(*s2);
	rst = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 2));
	if (rst == NULL)
		return (NULL);
	if (s1)
		ft_memcpy(rst, *s1, len_s1);
	rst[len_s1] = sep;
	if (*s2)
		ft_memcpy(&rst[len_s1 + 1], *s2, len_s2);
	rst[len_s1 + len_s2 + 1] = '\0';
	if (*s1 && (clean == 1 || clean == 0))
		ft_safe_free_char(s1);
	if (*s2 && (clean == 2 || clean == 0))
		ft_safe_free_char(s2);
	return (rst);
}
