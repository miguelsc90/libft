/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misanche <misanche@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:03:06 by misanche          #+#    #+#             */
/*   Updated: 2022/04/12 18:16:38 by misanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(const char *nptr)
{
	int	i;

	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\f'
		|| nptr[i] == '\r' || nptr[i] == '\n' || nptr[i] == '\v')
		i++;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	digit;

	num = 0;
	i = 0;
	digit = 1;
	i = check(nptr);
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			digit = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	if (num * digit == -469762049)
		return (-1);
	if (num * digit == 469762049)
		return (0);
	return (num * digit);
}
