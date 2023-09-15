/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:28:58 by mporras           #+#    #+#             */
/*   Updated: 2022/01/10 22:29:00 by mporras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two memory areas.
 *
 * Compares the first 'n' bytes of the memory areas 's1' and 's2'.
 *
 * @param s1 The first memory area.
 * @param s2 The second memory area.
 * @param n The number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero if 's1' is found,
 *         respectively, to be less than, to match, or be greater than 's2'.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
