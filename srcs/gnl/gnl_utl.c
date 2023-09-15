/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_utl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:54:08 by mporras-          #+#    #+#             */
/*   Updated: 2022/06/01 11:44:56 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Create a substring from a string.
 *
 * @param s Source string.
 * @param start Start index of the substring.
 * @param len Length of the substring.
 * @param nl_len Pointer to an array containing the new line length and
 * total length.
 * @return A new substring.
 */
char	*ft_substr_gnl(char *s, int start, int len, int *nl_len)
{
	char	*rst;

	if (!s)
		return (NULL);
	if (len > (nl_len[1] - start))
		len = nl_len[1] - start;
	if (start > nl_len[1])
		len = 0;
	rst = (char *)malloc(sizeof(char) * (len + 1));
	if (rst == NULL)
		return (NULL);
	rst[len] = '\0';
	ft_memcpy(rst, &s[start], (size_t)len);
	return (rst);
}

/**
 * @brief Concatenate two strings.
 *
 * @param s1 First string.
 * @param s2 Second string.
 * @param bytes Number of bytes to concatenate from the second string.
 * @param nl_len Pointer to an array containing the new line length and
 * total length.
 * @return A new string which is the concatenation of the two strings.
 */
char	*ft_strjoin_gnl(char *s1, char *s2, int bytes, int *nl_len)
{
	char	*rst;

	if (!s1 || !s2)
		return (NULL);
	rst = (char *)malloc(sizeof(char) * (nl_len[1] + 1));
	if (rst == NULL)
		return (NULL);
	rst[nl_len[1]] = '\0';
	ft_memcpy(rst, s1, (size_t)nl_len[1] - (size_t)bytes);
	ft_memcpy(&rst[nl_len[1] - bytes], s2, (size_t)bytes);
	ft_safe_free_char(&s1);
	return (rst);
}
