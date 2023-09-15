/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:08:26 by mporras-          #+#    #+#             */
/*   Updated: 2022/01/19 21:28:06 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the last link of a linked list.
 *
 * This function traverses the linked list until it reaches the last link. If the
 * linked list is empty, it returns NULL.
 *
 * @param lst Pointer to the first link of the linked list.
 * @return Pointer to the last link of the list or NULL if the list is empty.
 */
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	node = lst;
	while (node)
	{
		if (node->next == NULL)
			return (node);
		node = node->next;
	}
	return (node);
}
