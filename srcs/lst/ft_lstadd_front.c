/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:00:09 by mporras-          #+#    #+#             */
/*   Updated: 2022/01/19 21:26:33 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Inserts the element 'new' at the beginning of the linked list.
 *
 * If the pointer to the list is NULL, it sets 'new' as the start of the list.
 * Otherwise, it inserts 'new' at the beginning and makes it the new first
 * element.
 *
 * @param lst A pointer to the pointer of the first link of a list.
 * @param new The address of the link to prepend to the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}
