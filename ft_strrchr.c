/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:12:39 by gfernand          #+#    #+#             */
/*   Updated: 2022/01/26 13:37:48 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == '\0')
		return (((char *)s) + ft_strlen(s));
	i = i - 1;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return (((char *)s) + i);
		i--;
	}
	return (NULL);
}
