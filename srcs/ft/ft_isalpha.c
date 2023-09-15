/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:07:45 by mporras-          #+#    #+#             */
/*   Updated: 2022/01/10 12:08:10 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if the given character is an alphabetic letter.
 *
 * The function returns true if the character is an uppercase (A-Z)
 * or lowercase (a-z) letter.
 *
 * @param c The character to check.
 * @return 1 if the character is an alphabetic letter, 0 otherwise.
 */
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
