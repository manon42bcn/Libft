/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:09:47 by mporras-          #+#    #+#             */
/*   Updated: 2022/01/10 13:10:00 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if the given character is in the ASCII character set.
 *
 * This function checks whether the provided character is within the range
 * of 0 to 127, which constitutes the standard ASCII character set.
 *
 * @param c The character to check.
 * @return 1 if the character is within the ASCII range, 0 otherwise.
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
