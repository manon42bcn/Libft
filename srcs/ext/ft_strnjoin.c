/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 00:18:04 by mporras-          #+#    #+#             */
/*   Updated: 2022/06/20 13:58:25 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Joins two strings up to specified lengths.
 *
 * Allocates memory for and creates a new string by concatenating 'len_s1'
 * characters from 's1' followed by 'len_s2' characters from 's2'.
 * The resulting string is null-terminated.
 *
 * @param s1 First source string to be joined.
 * @param s2 Second source string to be joined.
 * @param len_s1 Number of characters to be copied from 's1'.
 * @param len_s2 Number of characters to be copied from 's2'.
 * @return A pointer to the newly-allocated string, or NULL if memory
 * allocation fails.
 */
char	*ft_strnjoin(char const *s1, char const *s2,
			size_t len_s1, size_t len_s2)
{
	char	*rst;

	if (!s1 || !s2)
		return (NULL);
	rst = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (rst == NULL)
		return (NULL);
	ft_memcpy(rst, s1, len_s1);
	ft_memcpy(&rst[len_s1], s2, len_s2);
	rst[len_s1 + len_s2] = 0;
	return (rst);
}

/**
 * @brief Joins two strings up to specified lengths and then frees
 * the source strings.
 *
 * Allocates memory for and creates a new string by concatenating 'len_s1'
 * characters from 's1' followed by 'len_s2' characters from 's2'.
 * After copying the specified lengths, the source strings
 * 's1' and 's2' are freed.
 * The resulting string is null-terminated.
 *
 * @param s1 First source string to be joined and freed.
 * @param s2 Second source string to be joined and freed.
 * @param len_s1 Number of characters to be copied from 's1'.
 * @param len_s2 Number of characters to be copied from 's2'.
 * @return A pointer to the newly-allocated string, or NULL if memory
 * allocation fails.
 */
char	*ft_strnjoin_clean(char *s1, char *s2,
			size_t len_s1, size_t len_s2)
{
	char	*rst;

	if (!s1 && !s2)
		return (NULL);
	rst = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (rst == NULL)
		return (NULL);
	if (s1)
		ft_memcpy(rst, s1, len_s1);
	if (s2)
		ft_memcpy(&rst[len_s1], s2, len_s2);
	rst[len_s1 + len_s2] = 0;
	if (s1)
		ft_safe_free_char(&s1);
	if (s2)
		ft_safe_free_char(&s2);
	return (rst);
}
