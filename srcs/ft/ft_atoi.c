/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:59:25 by mporras           #+#    #+#             */
/*   Updated: 2022/06/21 14:07:40 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is whitespace.
 *
 * Determines if the given character 'c' is a whitespace character,
 * which includes spaces, tabs, line feeds, form feeds, carriage returns,
 * and vertical tabs.
 *
 * @param c Character to be checked.
 * @return 1 if 'c' is a whitespace character, otherwise 0.
 */
static inline int	ft_atoi_isprint(char c)
{
	return (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\t');
}

/**
 * @brief Skips whitespace characters in a string.
 *
 * Iterates through the characters of the string 'str', and increments the
 * index 'i' whenever it encounters a whitespace character. Additionally,
 * it sets the sign of the result based on encountering a '+' or '-' character.
 *
 * @param str Input string.
 * @param i Pointer to the current index in 'str'.
 * @param rst Pointer to the result array; rst[1] will be updated with the sign.
 */
static inline void	ft_atoi_spaces(const char *str, int *i, long long int *rst)
{
	while (ft_atoi_isprint(str[*(i)]) == 1)
			*(i) = *(i) + 1;
	if (str[*(i)] == '-' || str[*(i)] == '+')
	{
		if (str[*(i)] == '-')
			rst[1] = rst[1] * -1;
		*(i) = *(i) + 1;
	}
}

/**
 * @brief Tests if the current number parsing is within the integer limit.
 *
 * Computes the next value of the number being parsed and checks if it's within
 * the range of an integer, considering the current sign in 'rst'.
 *
 * @param rst Pointer to the result array. rst[0] is the current number, rst[1]
 * is the sign.
 * @param c Current character being parsed.
 * @return 0 if number exceeds positive limit, -1 if it exceeds negative limit,
 * and 1 otherwise.
 */
static inline int	ft_atoi_test(long long int *rst, char c)
{
	long long int	test;

	test = rst[0] * 10 + (c - '0');
	if (rst[1] == -1)
	{
		if (test > 2147483648)
			return (0);
	}
	else
	{
		if (test > 2147483647)
			return (-1);
	}
	rst[0] = test;
	rst[2] = test * rst[1];
	return (1);
}

/**
 * @brief Converts a string to an integer.
 *
 * Parses the string 'str' and converts its numerical content to an integer.
 * Handles positive and negative signs. Skips leading whitespaces.
 * Returns the integer equivalent of the first sequence of numbers found
 * in the string.
 * If the parsing encounters a non-numeric character, parsing stops.
 *
 * @param str Input string.
 * @return The integer value of the parsed portion of the string.
 */
int	ft_atoi(const char *str)
{	
	long long int	rst[3];
	int				test;
	int				i;

	rst[0] = 0;
	rst[1] = 1;
	rst[2] = 0;
	i = 0;
	ft_atoi_spaces(str, &i, &rst[0]);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return ((int)rst[2]);
		else if (str[i] >= '0' && str[i] <= '9')
		{	
			test = ft_atoi_test(&rst[0], str[i]);
			if (test != 1)
				return (test);
		}
		i++;
	}
	return ((int)rst[2]);
}
