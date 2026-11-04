/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbidas <zbidas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:11:38 by zbidas            #+#    #+#             */
/*   Updated: 2026/11/01 01:17:14 by zbidas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	bool	in_word;
	int		words_count;

	in_word = false;
	words_count = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = true;
			words_count++;
		}
		else if (in_word && *s == c)
			in_word = false;
		s++;
	}
	return (words_count);
}

static void	*free_all(char **arr, int k)
{
	while (k > 0)
	{
		free(arr[k - 1]);
		k--;
	}
	free(arr);
	return (NULL);
}

static char	**ft_alloc(char **arr, char const *s, char c, int w)
{
	int	i;
	int	j;
	int	k;
	int	len;

	i = 0;
	k = 0;
	while (s[i] && k < w)
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[j] && s[j] != c)
			j++;
		len = j - i;
		arr[k] = ft_substr(s, i, len);
		if (arr[k] == NULL)
			return (free_all(arr, k));
		i = j;
		k++;
	}
	arr[k] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		w;

	if (s == NULL)
		return (NULL);
	w = count_words(s, c);
	arr = malloc(sizeof(char *) * (w + 1));
	if (arr == NULL)
		return (NULL);
	arr = ft_alloc(arr, s, c, w);
	return (arr);
}
