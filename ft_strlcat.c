/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misanche <misanche@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:13:23 by misanche          #+#    #+#             */
/*   Updated: 2022/04/11 19:15:02 by misanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int				src_size;
	unsigned int	i;
	unsigned int	dst_size;

	i = 0;
	dst_size = 0;
	src_size = 0;
	while (src[src_size])
		src_size++;
	if (size == 0)
		return (src_size);
	while (dst_size < size && dst[dst_size])
		dst_size++;
	if (size <= dst_size)
		return (size + src_size);
	i = 0;
	while (size && (--size - dst_size) && src[i])
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (dst_size + src_size);
}
