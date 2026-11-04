/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbidas <zbidas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:49:52 by zbidas            #+#    #+#             */
/*   Updated: 2026/11/02 23:26:54 by zbidas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			l;
	char			*r;

	if (!s || !f)
		return (NULL);
	l = ft_strlen(s);
	r = malloc(sizeof(char) * (l + 1));
	if (r == NULL)
		return (NULL);
	i = 0;
	while (i < l)
	{
		r[i] = f(i, s[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
