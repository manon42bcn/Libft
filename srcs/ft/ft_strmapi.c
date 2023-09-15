/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:10:38 by mporras-          #+#    #+#             */
/*   Updated: 2022/01/11 13:10:44 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies the function 'f' to each character of the string 's' to
 * create a new string (with malloc()) resulting from successive applications
 * of 'f'.
 *
 * This function iterates over the string 's' and for each character,
 * it applies the function 'f' with its index and the character as arguments.
 * The result of this application replaces the character in the new string.
 * If memory allocation fails or 's' is NULL, the function returns NULL.
 *
 * @param s The string on which to iterate.
 * @param f The function to apply to each character of 's'.
 * @return The string created from the successive applications of 'f'.
 *         Returns NULL if the allocation fails or if 's' is NULL.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rst;
	size_t	len;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	rst = (char *)malloc(sizeof(char) * (len + 1));
	if (rst == NULL)
		return (NULL);
	while (s[i])
	{
		rst[i] = (*f)(i, s[i]);
		i++;
	}
	rst[i] = 0;
	return (rst);
}
