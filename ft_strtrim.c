/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbidas <zbidas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:24:53 by zbidas            #+#    #+#             */
/*   Updated: 2026/11/01 01:19:58 by zbidas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cchr(char c, char const *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*r;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && ft_cchr(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_cchr(s1[j - 1], set))
		j--;
	r = malloc(sizeof(char) * ((j - i) + 1));
	if (r == NULL)
		return (NULL);
	k = 0;
	while (i < j)
	{
		r[k++] = s1[i++];
	}
	r[k] = '\0';
	return (r);
}
