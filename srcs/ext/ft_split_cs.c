/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_cs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:29:32 by mporras-          #+#    #+#             */
/*   Updated: 2023/06/09 22:46:12 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a part of a string to a list node using a charset delimiter.
 *
 * This function extracts the content up to the next occurrence of a character
 * in the charset from the string 's'. It then adds this content to the beginning
 * of the list pointed to by 'head'.
 *
 * @param head Pointer to the head of the list.
 * @param s The source string.
 * @param charset String containing delimiter characters.
 * @return The length of the extracted content or -1 on failure.
 */
static inline int	ft_str_to_lst(t_list **head, char const *s, char *charset)
{
	char	*content;
	size_t	size;

	size = ft_len_charset(s, charset);
	content = ft_strndup(s, size);
	if (!content)
		return (-1);
	ft_lstadd_front(head, ft_lstnew(content));
	return (size);
}

/**
 * @brief Safely ends a function by clearing the list and returning NULL.
 *
 * @param head Pointer to the head of the list.
 * @return NULL.
 */
static inline char	**ft_safe_end(t_list **head)
{
	ft_lstclear(head, free);
	return (NULL);
}

/**
 * @brief Builds a string array from a list of strings.
 *
 * This function converts a linked list of strings into a dynamic array
 * of strings. The list is then cleared, freeing the nodes but
 * retaining the string content within the newly built array.
 *
 * @param head Pointer to the head of the list.
 * @return Pointer to the string array or NULL on failure.
 */
static inline char	**ft_build_tab(t_list **head)
{
	char	**rst;
	t_list	*node;
	int		deep;

	node = *head;
	deep = ft_lstsize(node);
	rst = (char **)ft_calloc(deep + 1, sizeof(char *));
	if (!rst)
		return (ft_safe_end(head));
	deep--;
	while (node)
	{
		rst[deep] = node->content;
		node = node->next;
		deep--;
	}
	ft_lstclear(head, NULL);
	return (rst);
}

/**
 * @brief Splits a string by a set of delimiter characters.
 *
 * This function splits the string 's' wherever a character from 'charset'
 * appears, and stores each part in a dynamic string array.
 *
 * @param s The source string to split.
 * @param charset String containing delimiter characters.
 * @return Pointer to the resulting string array or NULL on failure.
 */
char	**ft_split_cs(char const *s, char *charset)
{
	t_list	*head;
	int		i;
	int		eval;

	head = NULL;
	i = 0;
	while (s[i])
	{
		eval = 1;
		if (ft_is_charset(s[i], charset) == FALSE)
			eval = ft_str_to_lst(&head, &s[i], charset);
		if (eval == -1)
			return (ft_safe_end(&head));
		i += eval;
	}
	return (ft_build_tab(&head));
}
