/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:20:38 by mporras-          #+#    #+#             */
/*   Updated: 2022/01/10 13:20:42 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if the given character is printable.
 *
 * Determines whether the provided character is a printable ASCII character,
 * excluding the space (' ') and delete (DEL) characters.
 *
 * @param c The character to check.
 * @return 1 if the character is printable, 0 otherwise.
 */
int	ft_isprint(int c)
{
	return (c > 31 && c < 127);
}
