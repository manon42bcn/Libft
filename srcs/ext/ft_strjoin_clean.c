/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_clean.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 01:25:20 by mporras           #+#    #+#             */
/*   Updated: 2022/06/02 13:23:49 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Joins two strings and optionally frees them.
 *
 * Creates a new string by joining the strings pointed by 's1' and 's2'.
 * Depending on the value of 'clean', it may free either or both of the input
 * strings.
 *
 * @param s1 Pointer to the first string.
 * @param s2 Pointer to the second string.
 * @param clean An integer indicating which strings to free:
 *              0 = free both, 1 = free s1, 2 = free s2.
 * @return A newly allocated string containing the concatenation.
 */
char	*ft_strjoin_clean(char **s1, char **s2, int clean)
{
	char	*rst;
	size_t	len_s1;
	size_t	len_s2;

	if (!*s1 && !*s2)
		return (NULL);
	len_s1 = ft_strlen(*s1);
	len_s2 = ft_strlen(*s2);
	rst = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (rst == NULL)
		return (NULL);
	if (s1)
		ft_memcpy(rst, *s1, len_s1);
	if (s2)
		ft_memcpy(&rst[len_s1], *s2, len_s2);
	rst[len_s1 + len_s2] = 0;
	if (*s1 && (clean == 1 || clean == 0))
		ft_safe_free_char(s1);
	if (*s2 && (clean == 2 || clean == 0))
		ft_safe_free_char(s2);
	return (rst);
}

/**
 * @brief Joins a string and a string pointer, then frees the string pointer.
 *
 * Creates a new string by joining the string '*s1' and the string 's2'.
 * After joining, it frees the memory of string pointer 's1'.
 *
 * @param s1 Pointer to the first string.
 * @param s2 The second string.
 * @return A newly allocated string containing the concatenation.
 */
char	*ft_strjoin_clean_one(char **s1, char *s2)
{
	char	*rst;
	size_t	len_s1;
	size_t	len_s2;

	if (!*s1 && !s2)
		return (NULL);
	len_s1 = ft_strlen(*s1);
	len_s2 = ft_strlen(s2);
	rst = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (rst == NULL)
		return (NULL);
	if (s1)
		ft_memcpy(rst, *s1, len_s1);
	if (s2)
		ft_memcpy(&rst[len_s1], s2, len_s2);
	rst[len_s1 + len_s2] = 0;
	ft_safe_free_char(s1);
	return (rst);
}

/**
 * @brief Joins a string and a string pointer, then frees the string pointer.
 *
 * Creates a new string by joining the string 's1' and the string '*s2'.
 * After joining, it frees the memory of string pointer 's2'.
 *
 * @param s1 The first string.
 * @param s2 Pointer to the second string.
 * @return A newly allocated string containing the concatenation.
 */
char	*ft_strjoin_clean_two(char *s1, char **s2)
{
	char	*rst;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 && !*s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(*s2);
	rst = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (rst == NULL)
		return (NULL);
	if (s1)
		ft_memcpy(rst, s1, len_s1);
	if (s2)
		ft_memcpy(&rst[len_s1], *s2, len_s2);
	rst[len_s1 + len_s2] = 0;
	ft_safe_free_char(s2);
	return (rst);
}

/**
 * @brief Joins two strings and optionally frees them.
 *
 * Creates a new string by joining the strings 's1' and 's2'.
 * Depending on the value of 'clean', it may free either or both of the
 * input strings.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @param clean An integer indicating which strings to free:
 *              0 = free both, 1 = free s1, 2 = free s2.
 * @return A newly allocated string containing the concatenation.
 */
char	*ft_strjoin_clear_ptn(char *s1, char *s2, int clean)
{
	char	*rst;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 && !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	rst = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (rst == NULL)
		return (NULL);
	if (s1)
		ft_memcpy(rst, s1, len_s1);
	if (s2)
		ft_memcpy(&rst[len_s1], s2, len_s2);
	rst[len_s1 + len_s2] = 0;
	if (s1 && (clean == 1 || clean == 0))
		free(s1);
	if (s2 && (clean == 2 || clean == 0))
		free(s2);
	return (rst);
}
