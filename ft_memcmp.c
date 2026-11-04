/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbidas <zbidas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:36:36 by zbidas            #+#    #+#             */
/*   Updated: 2026/11/01 01:18:55 by zbidas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p;
	const unsigned char	*d;
	size_t				i;

	p = (const unsigned char *)s1;
	d = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p[i] - d[i] != 0)
			return (p[i] - d[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (p[i] - d[i]);
}
