/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 01:44:43 by mporras           #+#    #+#             */
/*   Updated: 2022/01/11 01:44:45 by mporras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a character to the specified file descriptor.
 *
 * Outputs the character 'c' to the given file descriptor 'fd'.
 * If 'fd' is negative or zero, no action is taken.
 *
 * @param c The character to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putchar_fd(char c, int fd)
{
	if (fd > 0)
		write(fd, &c, 1);
}
