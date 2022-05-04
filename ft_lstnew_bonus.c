/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misanche <misanche@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:23:11 by misanche          #+#    #+#             */
/*   Updated: 2022/04/23 09:49:37 by misanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elemt;

	new_elemt = malloc(sizeof(t_list));
	if (!new_elemt)
		return (NULL);
	new_elemt -> content = content;
	new_elemt -> next = NULL;
	return (new_elemt);
}
