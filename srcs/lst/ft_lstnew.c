/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:57:11 by mporras-          #+#    #+#             */
/*   Updated: 2022/01/19 21:28:53 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a new linked list element.
 *
 * This function allocates memory for a new linked list node and initializes
 * its content with the value provided. The 'next' pointer of the node is
 * initialized to NULL.
 *
 * @param content The content to place in the new node.
 * @return A pointer to the new node or NULL if memory allocation fails.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (elem == NULL)
		return (NULL);
	else
	{
		elem->content = content;
		elem->next = NULL;
	}
	return (elem);
}
