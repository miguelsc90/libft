/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misanche <misanche@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:28:55 by misanche          #+#    #+#             */
/*   Updated: 2022/04/18 18:15:06 by misanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	word_count;
	size_t	i;

	word_count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			if (i == 0 || s[i - 1] == c)
				word_count++;
			i++;
		}
	}
	return (word_count);
}

static void	ft_free_split(char **str, size_t words)
{
	while (words > 0)
	{
		free(str[words]);
		words--;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**str;
	size_t	index;

	index = 0;
	i = 0;
	if (!s)
		return (NULL);
	str = ft_calloc(sizeof (char *), (ft_count_words(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i] && (index < ft_count_words(s, c)))
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		str[index++] = ft_substr(s, j, (i - j));
	}
	if (!str)
		ft_free_split(str, ft_count_words(s, c));
	return (str);
}

/*int main()
{
	char **nueva;
	nueva = ft_split("hola que tal", ' ');
	while (*nueva)
	{
		printf("%s\n", *nueva++);
	}
	system("leaks a.out");
	return (0);
}*/
