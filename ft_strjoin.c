/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:04:56 by gfernand          #+#    #+#             */
/*   Updated: 2022/02/02 17:27:27 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int		n;
	int		p;

	if (!s1 || !s2)
		return (NULL);
	n = ft_strlen(s1);
	p = ft_strlen(s2);
	string = malloc(sizeof(char) * (n + p + 1));
	if (!string)
		return (NULL);
	ft_strlcpy(string, s1, n + 1);
	ft_strlcat(string + n, s2, p + n + 1);
	return (string);
}
