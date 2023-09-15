/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:40:50 by mporras-          #+#    #+#             */
/*   Updated: 2022/06/17 16:12:30 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if the given character is a decimal digit.
 *
 * This function determines whether the provided character is a number
 * between '0' and '9' inclusive.
 *
 * @param c The character to check.
 * @return 1 if the character is a decimal digit, 0 otherwise.
 */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
