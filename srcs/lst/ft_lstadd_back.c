/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:11:59 by mporras-          #+#    #+#             */
/*   Updated: 2022/01/19 21:25:55 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Appends the element 'new' at the end of the linked list.
 *
 * If the pointer to the list is NULL, it sets 'new' as the start of the list.
 * Otherwise, it traverses the list to its last element and appends
 * 'new' at the end.
 *
 * @param lst A pointer to the pointer of the first link of a list.
 * @param new The address of the link to append to the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	if (new)
	{
		node = *lst;
		while (node->next != NULL)
			node = node->next;
		node->next = new;
	}
}
