/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 21:25:38 by mporras           #+#    #+#             */
/*   Updated: 2022/01/10 21:25:40 by mporras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts a lowercase character to its uppercase equivalent.
 *
 * If the character passed to the function is a lowercase letter,
 * it returns its uppercase equivalent. If it's not a lowercase letter,
 * the function returns the character unchanged.
 *
 * @param c The character to convert.
 * @return The uppercase equivalent of the character if it's lowercase,
 *         otherwise the original character.
 */
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
