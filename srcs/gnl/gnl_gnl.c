/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_gnl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:51:31 by mporras-          #+#    #+#             */
/*   Updated: 2022/05/16 13:18:16 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @brief Get the position of the newline character in a string.
 *
 * @param str Input string to search.
 * @return Position of the newline character, or 0 if not found.
 */
static inline int	ft_get_endline(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (i + 1);
		i++;
	}
	return (0);
}

/**
 * @brief Delete the current line from the buffer.
 *
 * @param buffer Pointer to the current buffer.
 * @param nl_len Pointer to an array containing the new line length
 * and total length.
 * @return A string containing the remaining content after the
 * current line is deleted.
 */
static inline char	*ft_delete_line_from_buffer(char **buffer, int *nl_len)
{
	char	*rst;

	if (nl_len[0] == nl_len[1] || (nl_len[0] == 0 && nl_len[1] > 0))
	{
		ft_safe_free_char(buffer);
		return (NULL);
	}
	rst = ft_substr_gnl(*buffer, nl_len[0], nl_len[1] - nl_len[0], &nl_len[0]);
	ft_safe_free_char(buffer);
	return (rst);
}

/**
 * @brief Process the current line in the buffer and prepare for the next line.
 *
 * @param buffer Current buffer containing the read content.
 * @param bytes Number of bytes read from the file.
 * @param nl_len Pointer to an array containing the new line length and
 * total length.
 * @return A string containing the processed line.
 */
static inline char	*ft_line_proccess(char **buffer, int bytes, int *nl_len)
{
	char	*rst;

	if (!*buffer)
		return (NULL);
	if (nl_len[0] == 0 && bytes == 0)
	{
		rst = ft_strndup(*buffer, nl_len[1]);
		*buffer = ft_delete_line_from_buffer(buffer, &nl_len[0]);
	}
	else
	{
		rst = ft_substr_gnl(*buffer, 0, nl_len[0], &nl_len[0]);
		*buffer = ft_delete_line_from_buffer(buffer, &nl_len[0]);
	}
	return (rst);
}

/**
 * @brief Read data in chunks from the file descriptor until a newline
 * character is found or EOF is reached.
 *
 * @param fd File descriptor.
 * @param buffer Pointer to the current buffer.
 * @param reader Temporary buffer to read chunks of data.
 * @param nl_len Pointer to an array containing the new line length
 * and total length.
 * @return A string containing the processed line.
 */
static inline char	*ft_buffer_reader(int fd, char **buffer,
	char *reader, int *nl_len)
{
	int	bytes;
	int	nl_reader;

	bytes = 0;
	while (nl_len[0] == 0)
	{
		bytes = read(fd, reader, BUFFER_SIZE);
		if (bytes <= 0)
			break ;
		reader[bytes] = '\0';
		nl_len[1] += bytes;
		nl_reader = ft_get_endline(reader);
		if (!*buffer)
			*buffer = ft_strndup(reader, bytes);
		else
			*buffer = ft_strjoin_gnl(*buffer, reader, bytes, &nl_len[0]);
		if (*buffer == NULL)
			break ;
		if (nl_reader > 0)
			nl_len[0] = (nl_len[1] - bytes) + nl_reader;
	}
	if (bytes < 0 || !*buffer)
		return (NULL);
	return (ft_line_proccess(buffer, bytes, &nl_len[0]));
}

/**
 * @brief Fetch the next line from the file descriptor.
 *
 * @param fd File descriptor.
 * @return A string containing the next line, or NULL on error or EOF.
 */
char	*get_next_line(int fd)
{
	static char	*buffer[256];
	char		*rst;
	char		*reader;
	int			nl_len[2];

	if (fd < 0 || fd > 257 || BUFFER_SIZE < 1)
		return (NULL);
	if (!buffer[fd])
		buffer[fd] = NULL;
	nl_len[0] = ft_get_endline(buffer[fd]);
	nl_len[1] = ft_strlen(buffer[fd]);
	if (nl_len[0] == 0)
	{
		reader = (char *)ft_sec_calloc(sizeof(char) * (BUFFER_SIZE + 1));
		rst = ft_buffer_reader(fd, &buffer[fd], reader, &nl_len[0]);
		ft_safe_free_char(&reader);
	}
	else
		rst = ft_line_proccess(&buffer[fd], 0, &nl_len[0]);
	return (rst);
}
