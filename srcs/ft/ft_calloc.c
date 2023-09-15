/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 23:05:51 by mporras           #+#    #+#             */
/*   Updated: 2022/01/10 23:23:28 by mporras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates memory for an array of 'count' elements, each of size 'size',
 *        and initializes all bytes in the allocated storage to zero.
 *
 * This function is a combination of malloc and ft_bzero. It first allocates the
 * necessary memory and then sets the memory to zero using ft_bzero.
 *
 * @param count Number of elements to allocate.
 * @param size Size of each element in bytes.
 * @return Pointer to the allocated memory, or NULL if the allocation fails.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*rst;

	rst = malloc(count * size);
	if (rst == NULL)
		return (NULL);
	ft_bzero(rst, count * size);
	return (rst);
}
