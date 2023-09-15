/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:01:20 by mporras-          #+#    #+#             */
/*   Updated: 2022/01/10 19:01:22 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets the first 'n' bytes of the memory area pointed to by 's' to zero.
 *
 * This function is commonly used to initialize or reset a memory area, such
 * as a buffer or a struct. The area is zeroed in reverse, starting from
 * the end of the specified range.
 *
 * @param s Pointer to the memory area to be zeroed.
 * @param n Number of bytes to set to zero.
 */
void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
		((char *)s)[n] = 0;
}
