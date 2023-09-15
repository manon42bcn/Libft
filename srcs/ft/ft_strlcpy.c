/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:07:58 by mporras-          #+#    #+#             */
/*   Updated: 2022/01/10 14:08:04 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies up to 'destsize' characters from the NUL-terminated string 'src'
 * to 'dest', NUL-terminating the result.
 *
 * It is designed to be safer, more consistent, and less error-prone
 * replacement for strncpy. Function size includes the NUL. Thus, if the return
 * value is >= 'destsize', the output string has been truncated.
 *
 * @param dest Destination buffer.
 * @param src Source string.
 * @param destsize Size of the destination buffer.
 * @return The length of the source string 'src'.
 */
size_t	ft_strlcpy(char *dest, char *src, size_t destsize)
{
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(src);
	if (destsize > 0)
	{
		while (src[i] && i < (destsize - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (s_len);
}
