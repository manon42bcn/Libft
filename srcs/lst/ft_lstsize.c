/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:04:31 by mporras-          #+#    #+#             */
/*   Updated: 2022/01/19 21:29:14 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes the size of a linked list.
 *
 * This function iterates through the linked list starting from the given node
 * and counts the number of nodes until the end.
 *
 * @param lst The starting node of the linked list.
 * @return The number of nodes in the linked list.
 */
int	ft_lstsize(t_list *lst)
{
	t_list	*node;
	int		i;

	node = lst;
	i = 0;
	while (node)
	{
		i++;
		node = node->next;
	}
	return (i);
}
