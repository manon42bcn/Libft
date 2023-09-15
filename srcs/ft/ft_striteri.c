/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 01:39:28 by mporras           #+#    #+#             */
/*   Updated: 2022/01/11 01:39:55 by mporras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates over a string and applies a function to each character.
 *
 * The function 'f' is applied to each character of the string 's' using its
 * index as the first argument. Essentially, it modifies the string in place
 * depending on the function 'f' provided.
 * If the input string is NULL, the function does nothing.
 *
 * @param s The string to iterate over.
 * @param f The function to apply to each character of 's'.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
