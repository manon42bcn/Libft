/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 01:51:18 by mporras           #+#    #+#             */
/*   Updated: 2022/01/11 01:51:20 by mporras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a string to the specified file descriptor, followed by a
 * newline.
 *
 * Outputs the string 's' to the given file descriptor 'fd' and then appends
 * a newline. If 's' is NULL or 'fd' is zero, no action is taken.
 *
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (s && fd)
	{
		ft_putstr_fd(s, fd);
		write(fd, "\n", 1);
	}
}
