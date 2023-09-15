/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_general_utl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 00:35:30 by mporras-          #+#    #+#             */
/*   Updated: 2023/06/20 22:15:04 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Initializes an integer vector with a specific value.
 *
 * This function fills an integer vector of a given size with a specified value.
 *
 * @param vector Pointer to the integer vector.
 * @param value Value to fill the vector with.
 * @param size Number of elements in the vector.
 */
void	ft_init_vector(int *vector, int value, int size)
{
	while (size--)
		vector[size] = value;
}

/**
 * @brief Safely frees a char pointer and sets it to NULL.
 *
 * This function frees the memory allocated for a char pointer if it's not NULL.
 * After freeing, it sets the pointer to NULL to prevent dangling references.
 *
 * @param s Double pointer to the char string to be freed.
 */
void	ft_safe_free_char(char **s)
{
	if (!s)
		return ;
	if (*(s))
	{
		free(*(s));
		*(s) = NULL;
	}
}

/**
 * @brief Checks each character in a string using a function pointer.
 *
 * Iterates over each character in the string 's' and checks it using the
 * provided function 'f'. If the function 'f' returns 0 for any character,
 * this function returns 0, otherwise it returns 1.
 *
 * @param s Pointer to the input string.
 * @param f Function pointer that checks a character.
 * @return 1 if all characters pass the check, otherwise 0.
 */
int	ft_check_by_fnc(char *s, int (f)(int))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (f(s[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
