/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbidas <zbidas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:55:05 by zbidas            #+#    #+#             */
/*   Updated: 2026/11/02 11:33:02 by zbidas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	j;

	if (little == NULL || *little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		c = 0;
		j = 0;
		while (i + j < len && big[i + j] == little[j] && little[j])
		{
			c++;
			j++;
		}
		if (c == ft_strlen(little))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
