/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 01:15:24 by mporras           #+#    #+#             */
/*   Updated: 2022/01/11 01:15:26 by mporras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Extracts a substring from a string.
 *
 * This function returns a newly allocated string that contains a substring
 * of the string 's'. The substring starts at index 'start' and has a
 * maximum length of 'len'.
 *
 * If 'start' is greater than the length of 's', an empty string is returned.
 * If 'len' specifies more characters than the remainder of 's' starting
 * from 'start', then only those characters are used.
 *
 * @param s The original string.
 * @param start The starting index of the substring.
 * @param len The maximum length of the substring.
 * @return A newly allocated string containing the substring, or NULL
 *         if memory allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	max;
	char	*rst;

	if (!s)
		return (NULL);
	max = ft_strlen(s);
	if (len > (max - start))
		len = max - start;
	if (start > max)
		len = 0;
	rst = (char *)malloc(sizeof(char) * (len + 1));
	if (rst == NULL)
		return (NULL);
	if (len == 0)
		rst[0] = '\0';
	else
		ft_strlcpy(rst, &((char *)s)[start], len + 1);
	return (rst);
}
