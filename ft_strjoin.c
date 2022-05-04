/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misanche <misanche@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:15:13 by misanche          #+#    #+#             */
/*   Updated: 2022/04/23 17:17:42 by misanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nueva;
	int		is1;
	int		is2;
	int		i;

	is1 = 0;
	is2 = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[is1])
		is1++;
	while (s2[is2])
		is2++;
	nueva = malloc(sizeof(char) + is1 + is2 + 1);
	if (!nueva)
		return (NULL);
	is1 = 0;
	is2 = 0;
	while (s1[is1])
		nueva[i++] = s1[is1++];
	while (s2[is2])
		nueva[i++] = s2[is2++];
	nueva[i] = '\0';
	return (nueva);
}
