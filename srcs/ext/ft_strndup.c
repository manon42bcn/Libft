/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:40:54 by mporras-          #+#    #+#             */
/*   Updated: 2022/05/21 11:41:00 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplicates a string up to a given length.
 *
 * Allocates memory for and duplicates the first 'len' characters of the
 * string 'src'. The duplicated string is null-terminated.
 *
 * @param src The source string to be duplicated.
 * @param len The number of characters to copy from 'src'.
 * @return A pointer to the newly-allocated string, or NULL if memory
 * allocation fails.
 */
char	*ft_strndup(const char *src, size_t len)
{
	char	*dst;

	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);
	dst[len] = '\0';
	while (len-- > 0)
		dst[len] = src[len];
	return (dst);
}
