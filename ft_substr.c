/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misanche <misanche@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:19:25 by misanche          #+#    #+#             */
/*   Updated: 2022/04/23 10:16:30 by misanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*nueva;
	size_t			i;
	unsigned int	num;

	i = 0;
	if (!s)
		return (NULL);
	num = ft_strlen(s);
	if (num < start)
	{
		nueva = malloc(sizeof(char) * 1);
		if (!nueva)
			return (NULL);
		nueva[0] = '\0';
		return (nueva);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	nueva = malloc(sizeof(char) * (len + 1));
	if (!nueva)
		return (NULL);
	while (i < len)
		nueva[i++] = s[start++];
	nueva[i] = '\0';
	return (nueva);
}
