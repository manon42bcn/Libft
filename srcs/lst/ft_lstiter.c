/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:30:33 by mporras-          #+#    #+#             */
/*   Updated: 2022/01/19 21:27:44 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates through a linked list and applies a function to each
 * link's content.
 *
 * The function goes through each link in the list and applies a given
 * function 'f' to the content of the link. If the linked list or function
 * pointer is NULL, the function does nothing.
 *
 * @param lst Pointer to the first link of the linked list.
 * @param f The function to be applied to each link's content.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*node;

	if (lst != NULL)
	{
		node = lst;
		while (node)
		{
			f(node->content);
			node = node->next;
		}
	}
}
