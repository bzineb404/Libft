/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbidas <zbidas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:18:45 by zbidas            #+#    #+#             */
/*   Updated: 2026/10/28 20:35:30 by zbidas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	l;
	size_t	j;
	size_t	i;

	l = 0;
	while (l < size && dst[l])
		l++;
	if (size > l)
	{
		j = l;
		i = 0;
		while (j < size - 1 && src[i])
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
		return (l + ft_strlen(src));
	}
	return (size + ft_strlen(src));
}
