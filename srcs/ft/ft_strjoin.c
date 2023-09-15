/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 01:25:20 by mporras           #+#    #+#             */
/*   Updated: 2022/05/27 10:28:34 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Joins two strings together.
 *
 * Allocates a new string, which is the concatenation of 's1' and 's2'.
 * The resulting string is NULL-terminated. The function returns NULL if
 * either of the input strings is NULL or if memory allocation fails.
 *
 * @param s1 The first string.
 * @param s2 The second string to append to the first.
 * @return A newly allocated string containing the concatenation of 's1'
 * and 's2',
 *         or NULL if an error occurred.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rst;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	rst = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (rst == NULL)
		return (NULL);
	ft_memcpy(rst, s1, len_s1);
	ft_memcpy(&rst[len_s1], s2, len_s2);
	rst[len_s1 + len_s2] = 0;
	return (rst);
}
