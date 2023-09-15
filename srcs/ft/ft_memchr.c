/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:22:15 by mporras           #+#    #+#             */
/*   Updated: 2022/01/10 22:22:18 by mporras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Searches for the first occurrence of a character in a memory block.
 *
 * Scans the initial 'n' bytes of the memory area pointed to by 's'
 * for the first occurrence of 'c' (converted to an unsigned char).
 *
 * @param s The memory area to be scanned.
 * @param c The character to search for.
 * @param n The number of bytes to scan.
 * @return A pointer to the first occurrence of the character in the
 * memory block, or NULL if the character does not occur.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == (char)c)
			return (((void *)s) + i);
		i++;
	}
	return (NULL);
}
