/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:21:50 by mporras-          #+#    #+#             */
/*   Updated: 2022/01/19 21:27:07 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Clears and frees the entire linked list and sets its starting
 * pointer to NULL.
 *
 * It traverses the list starting from the first element, freeing each node using
 * the function 'del' and then setting the pointer to the next element until
 * the entire list has been cleared.
 *
 * @param lst A pointer to the pointer of the first link of a list.
 * @param del The address of the function used to delete the content of
 * the elements.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*elem;

	if (lst)
	{
		while (*lst)
		{
			elem = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = elem;
		}
	}
}
