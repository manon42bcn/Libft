/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:01:10 by mporras-          #+#    #+#             */
/*   Updated: 2022/06/17 16:05:38 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if the given character is alphanumeric.
 *
 * The function returns true if the character is a digit (0-9) or an
 * uppercase (A-Z) or lowercase (a-z) letter.
 *
 * @param c The character to check.
 * @return 1 if the character is alphanumeric, 0 otherwise.
 */
int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
