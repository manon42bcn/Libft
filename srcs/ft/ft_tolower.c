/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 21:29:58 by mporras           #+#    #+#             */
/*   Updated: 2022/01/10 21:30:00 by mporras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts an uppercase character to its lowercase equivalent.
 *
 * If the character passed to the function is an uppercase letter,
 * it returns its lowercase equivalent. If it's not an uppercase letter,
 * the function returns the character unchanged.
 *
 * @param c The character to convert.
 * @return The lowercase equivalent of the character if it's uppercase,
 *         otherwise the original character.
 */
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
