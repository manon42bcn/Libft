/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_replace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:31:40 by mporras-          #+#    #+#             */
/*   Updated: 2022/06/30 23:32:03 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Replaces all occurrences of a character 'org' in the string '*s'
 *        with the character 'new'.
 *
 * This function iterates through the string and replaces every instance
 * of the character 'org' with the character 'new'. If the string pointer
 * is NULL, or 'org' or 'new' are NULL characters, the function returns without
 * making any modifications.
 *
 * @param s Pointer to the string where replacements are to be made.
 * @param org The original character that needs to be replaced.
 * @param new The new character that will replace the 'org' character.
 */

void	ft_char_replace(char **s, char org, char new)
{
	int	i;

	i = 0;
	if (!*s || !org || !new)
		return ;
	while (*(s)[i] != '\0')
	{
		if (*(s)[i] == org)
			*(s)[i] = new;
		i++;
	}
}
