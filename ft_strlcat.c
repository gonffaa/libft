/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:34:38 by gfernand          #+#    #+#             */
/*   Updated: 2022/01/26 12:38:32 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;
	size_t	result;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	i = 0;
	result = 0;
	if (dstsize <= d)
		result = (s + dstsize);
	else
	{
		result = (d + s);
		while (i + d + 1 < dstsize && src[i] != '\0')
		{
			dst[d + i] = src[i];
			result = (d + s);
			i++;
		}
		dst[d + i] = '\0';
	}
	return (result);
}
