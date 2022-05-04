/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misanche <misanche@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:51:01 by misanche          #+#    #+#             */
/*   Updated: 2022/04/23 13:49:54 by misanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*nueva;
	int		i;

	i = 0;
	nueva = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!nueva)
		return (NULL);
	while (*s)
	{
		nueva[i++] = *s++;
	}	
	nueva[i] = '\0';
	return (nueva);
}
