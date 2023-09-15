/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_secure_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 21:05:08 by mporras-          #+#    #+#             */
/*   Updated: 2023/06/30 21:44:53 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Securely allocates memory using malloc.
 *
 * This function attempts to allocate memory of the specified size. If
 * unsuccessful, it prints an error message and exits.
 *
 * @param size Amount of memory to allocate.
 * @return Pointer to the allocated memory.
 */
void	*ft_sec_malloc(size_t size)
{
	void	*rst;

	rst = malloc(size);
	if (!rst)
		ft_perror("Secure Malloc failed.");
	return (rst);
}

/**
 * @brief Securely allocates memory using calloc.
 *
 * This function attempts to allocate and zero-initialize memory for an
 * array of elements of size 1. If unsuccessful, it prints an error message
 * and exits.
 *
 * @param size Number of bytes to allocate.
 * @return Pointer to the allocated memory.
 */
void	*ft_sec_calloc(size_t size)
{
	void	*rst;

	rst = ft_calloc(size, 1);
	if (!rst)
		ft_perror("Secure Calloc failed.");
	return (rst);
}

/**
 * @brief Prints an error message to standard error.
 *
 * This function prints the provided error message 'msg' along with a
 * custom prefix, and then exits with an error status.
 *
 * @param msg The error message to print.
 */
void	ft_perror(char *msg)
{
	ft_putstr_fd("[Libft]", STDERR_FILENO);
	perror(msg);
	exit(ERROR);
}

/**
 * @brief Prints a custom error message to standard error.
 *
 * This function prints a custom prefix 'exc' (if provided) followed by the
 * provided error message 'msg', and then exits with an error status.
 *
 * @param exc Custom prefix for the error message.
 * @param msg The error message to print.
 */
void	ft_my_perror(char *exc, char *msg)
{
	if (exc)
		ft_putstr_fd(exc, STDERR_FILENO);
	perror(msg);
	exit(ERROR);
}

/**
 * @brief Securely frees a pointer and sets it to NULL.
 *
 * This function frees the memory pointed to by 'ptr' and then sets 'ptr'
 * to NULL to avoid dangling pointers.
 *
 * @param ptr Pointer to the memory to be freed.
 */
void	ft_sec_free(void *ptr)
{
	if (!ptr)
		return ;
	free(ptr);
	ptr = NULL;
}
