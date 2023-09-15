/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atolf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 01:27:02 by mporras-          #+#    #+#             */
/*   Updated: 2022/10/27 10:06:16 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if the given character is a printable whitespace or newline
 *        character.
 *
 * @param c The character to check.
 * @return int Returns 1 if the character is a printable whitespace or newline
 *             character, 0 otherwise.
 */
static int	ft_strfloat_isprint(char c)
{
	return (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\t');
}

/**
 * @brief Skips the whitespace and newline characters and sets the sign if any.
 *
 * @param str The input string to process.
 * @param i Pointer to the index of the current character in the string.
 * @param sign Pointer to the sign variable (1 for positive, -1 for negative).
 */
static void	ft_strfloat_spaces(const char *str, int *i, long double *sign)
{
	while (ft_strfloat_isprint(str[*(i)]) == 1)
			*(i) += 1;
	if (str[*(i)] == '-' || str[*(i)] == '+')
	{
		if (str[*(i)] == '-')
			*(sign) *= -1.0f;
		*(i) += 1;
	}
}

/**
 * @brief Protects against division by zero by returning the result.
 *
 * @param rst An array with the result and the sign.
 * @param power The current power of 10, or 1 if no '.' was encountered.
 * @return double Returns the result after considering the sign and power.
 */
static double	ft_zero_protect(long double rst[2], long double power)
{
	if (power == 0)
		power = 1;
	return ((rst[0] / power) * rst[1]);
}

/**
 * @brief Converts the initial portion of the string in str to a long double
 *        representation.
 *
 * Parses the string str interpreting its content as a floating point number
 * (according to the current locale) and returns its value as a long double.
 * The function first discards as many whitespace characters as necessary
 * until the first non-whitespace character is found. Then, starting from this
 * character, takes an optional initial plus or minus sign followed by as
 * many base-10 digits as possible, and interprets them as a numerical value.
 * A '.' character is also considered, allowing fractions.
 *
 * @param str The string containing the representation of a floating
 * point number.
 * @return long double Returns the converted floating point number.
 */
long double	ft_atolf(char *str)
{
	long double	rst[3];
	long double	power;
	int			i;

	rst[0] = 0;
	rst[1] = 1;
	i = 0;
	power = 0;
	ft_strfloat_spaces(str, &i, &rst[1]);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9') && (str[i] != '.' && power > 0))
			return (ft_zero_protect(rst, power));
		else if (str[i] == '.' && power == 0)
			power++;
		else if (str[i] >= '0' && str[i] <= '9')
		{	
			if (power > 0)
				power *= 10;
			rst[0] = rst[0] * 10 + (str[i] - '0');
		}
		i++;
	}
	return (ft_zero_protect(rst, power));
}
