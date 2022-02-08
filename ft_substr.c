/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 12:23:49 by gfernand          #+#    #+#             */
/*   Updated: 2022/02/01 11:41:42 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*d;

	if (s == '\0')
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
	{
		d = malloc(sizeof(char));
		*d = 0;
		return (d);
	}
	if (len > (size_t)ft_strlen(s))
		len = (size_t)ft_strlen(s);
	i = 0;
	d = (char *)malloc(sizeof(char) * len + 1);
	if (!d)
		return (NULL);
	while (s[start] && i < len)
	{
		d[i] = s[start];
		i++;
		start++;
	}
	d[i] = '\0';
	return (d);
}
