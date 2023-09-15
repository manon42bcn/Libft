/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:18:27 by mporras           #+#    #+#             */
/*   Updated: 2022/01/10 20:18:29 by mporras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Safely copies memory from one location to another.
 *
 * Copies 'len' bytes from memory area 'src' to memory area 'dest'.
 * This function can handle overlapping memory regions, ensuring that
 * the data is not corrupted during the copy operation.
 *
 * @param dest Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param len Number of bytes to copy.
 * @return A pointer to the destination memory area 'dest'.
 */
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;

	if (!dest && !src)
		return (NULL);
	i = -1;
	if (src < dest)
	{
		while (len-- > 0)
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
	}
	else
	{
		while (++i < len)
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	return (dest);
}
