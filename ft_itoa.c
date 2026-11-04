/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbidas <zbidas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 05:46:12 by zbidas            #+#    #+#             */
/*   Updated: 2026/10/30 21:11:31 by zbidas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_len(long nb)
{
	size_t	i;

	i = 1;
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	while (nb > 9)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*s;
	size_t	i;
	size_t	len;

	nb = n;
	len = int_len(nb);
	s = malloc(len + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	if (nb < 0)
	{
		s[i++] = '-';
		nb = -nb;
	}
	s[len] = '\0';
	while (len > i)
	{
		s[len - 1] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (s);
}
