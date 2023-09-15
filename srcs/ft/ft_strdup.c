/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 23:15:08 by mporras           #+#    #+#             */
/*   Updated: 2022/06/20 14:03:07 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplicate a string.
 *
 * The function creates a new string which is a duplicate of the string 'src'.
 * The returned string is allocated with 'malloc' and can be freed with 'free'.
 * If there isn't enough memory to allocate the new string, NULL is returned.
 *
 * @param src The string to duplicate.
 * @return A pointer to the duplicated string or NULL if allocation fails.
 */
char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	len;

	len = ft_strlen(src);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);
	dst[len] = '\0';
	while (len-- > 0)
		dst[len] = src[len];
	return (dst);
}
