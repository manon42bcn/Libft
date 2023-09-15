/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:35:48 by mporras-          #+#    #+#             */
/*   Updated: 2022/01/10 18:35:51 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets memory with a specified character.
 *
 * Fills the first 'len' bytes of the memory area pointed to by 'b'
 * with the constant byte 'c'.
 *
 * @param b Pointer to the memory area to fill.
 * @param c Character to set the memory area with.
 * @param len Number of bytes to set.
 * @return A pointer to the memory area 'b'.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = -1;
	c = (unsigned char)c;
	while (++i < len)
		((unsigned char *)b)[i] = c;
	return (b);
}
