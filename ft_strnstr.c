/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:56:54 by gfernand          #+#    #+#             */
/*   Updated: 2022/01/25 14:26:52 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	t;

	i = 0;
	t = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			while (needle[t] != '\0' && i + t < len)
			{
				if (needle[t] != haystack[i + t])
					break ;
				t++;
			}
			if (needle[t] == '\0')
				return (((char *)haystack) + i);
		}
		i++;
	}
	return (NULL);
}
