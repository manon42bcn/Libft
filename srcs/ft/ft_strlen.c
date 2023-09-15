/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:30:45 by mporras-          #+#    #+#             */
/*   Updated: 2022/01/10 13:30:51 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes the length of the string 's'.
 *
 * This function returns the number of characters that precede the
 * terminating NUL character. It does not include the NUL character itself.
 * If 's' is NULL, it will return 0.
 *
 * @param s Input string.
 * @return The number of characters in the string pointed to by 's'.
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}
