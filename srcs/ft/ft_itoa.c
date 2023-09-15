/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:34:17 by mporras-          #+#    #+#             */
/*   Updated: 2022/06/17 16:12:43 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calculates the magnitude (number of digits) of an integer.
 *
 * Computes the length required to represent an integer as a string.
 * Handles both positive and negative numbers.
 *
 * @param n The integer whose magnitude is to be calculated.
 * @return The magnitude of the integer.
 */
static inline int	ft_magnitude(int n)
{
	int				len;
	unsigned int	nbr;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{	
		len = 1;
		nbr = n * -1;
	}
	else
		nbr = n;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

/**
 * @brief Converts an integer to its ASCII string representation.
 *
 * This function will allocate (with malloc()) and return a new string ending
 * with '\0' representing the integer n given as argument. Negative numbers
 * are handled.
 *
 * @param n The integer to convert.
 * @return A string representing the integer, or NULL if memory allocation fails.
 */
char	*ft_itoa(int n)
{
	int				mag;
	char			*rst;
	unsigned int	nbr;

	mag = ft_magnitude(n);
	rst = (char *)malloc(sizeof(char) * (mag + 1));
	if (rst == NULL)
		return (NULL);
	rst[mag] = '\0';
	if (n < 0)
	{
		rst[0] = '-';
		nbr = n * -1;
	}
	else
		nbr = n;
	if (nbr == 0)
		rst[0] = '0';
	while (mag-- > 0 && nbr > 0)
	{
		rst[mag] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (rst);
}
