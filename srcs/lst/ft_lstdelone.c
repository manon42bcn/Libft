/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:15:27 by mporras-          #+#    #+#             */
/*   Updated: 2022/01/19 21:27:26 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Frees the memory of a single linked list element.
 *
 * The function takes as a parameter an element and frees the memory of the
 * element's content using the function 'del' provided as a parameter and
 * then frees the element itself. The memory of the next element is not
 * freed to prevent a double free.
 *
 * @param lst The link to be deleted.
 * @param del The address of the function used to delete the content of
 * the element.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del)
		del(lst->content);
	free(lst);
}
