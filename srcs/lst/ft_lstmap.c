/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:33:07 by mporras-          #+#    #+#             */
/*   Updated: 2022/01/19 21:28:29 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Maps a function onto each link of a linked list and returns a new list.
 *
 * This function iterates over the linked list `lst` and applies the function `f`
 * to each link's content. It then creates a new linked list from the results.
 * If any link creation fails, the entire resultant list is cleared, and the
 * function returns NULL.
 *
 * @param lst The original linked list.
 * @param f The function to apply to each link's content.
 * @param del Function to delete the content of a link.
 * @return The new linked list or NULL if memory allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*rst;
	t_list	*node;

	rst = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&rst, del);
			return (NULL);
		}
		ft_lstadd_back(&rst, node);
		lst = lst->next;
	}
	return (rst);
}
