/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misanche <misanche@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:50:22 by misanche          #+#    #+#             */
/*   Updated: 2022/03/31 16:45:58 by misanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (dest == src)
	{
		return (dest);
	}
	if (s < d)
	{
		while (n--)
		{
			*(d + n) = *(s + n);
		}
		return (dest);
	}
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
