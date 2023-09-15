/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 21:23:10 by mporras           #+#    #+#             */
/*   Updated: 2022/01/10 21:23:15 by mporras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenates two strings with size checking.
 *
 * Appends the NUL-terminated string 'src' to the end of 'dest' up to 'dstsize'
 * characters. It will then NUL-terminate, unless 'dstsize' is 0 or the original
 * 'dest' string was longer than 'dstsize'. Function is designed to be safer,
 * more consistent, and less error-prone replacement for `strncat`.
 *
 * @param dest Destination buffer.
 * @param src Source string.
 * @param dstsize Full size of the destination buffer.
 * @return Total length of the string tried to create, which is the sum of the
 *         initial length of 'dest' and the length of 'src'.
 */
size_t	ft_strlcat(char *dest, char *src, size_t dstsize)
{
	size_t	i;
	size_t	l_dest;
	size_t	l_src;

	i = 0;
	l_src = ft_strlen(src);
	if (dstsize == 0)
		return (l_src);
	l_dest = ft_strlen(dest);
	i = 0;
	while (src[i] && (l_dest + i) < (dstsize - 1))
	{
		dest[l_dest + i] = src[i];
		i++;
	}
	dest[l_dest + i] = 0;
	if (l_dest < dstsize)
		return (l_src + l_dest);
	return (l_src + dstsize);
}
