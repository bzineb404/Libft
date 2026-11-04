/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbidas <zbidas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 09:49:02 by zbidas            #+#    #+#             */
/*   Updated: 2026/11/03 18:48:30 by zbidas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	l;
	size_t	i;

	l = ft_strlen(s);
	str = malloc((sizeof(char) * l) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < l)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
