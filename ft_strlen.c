/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:37:50 by gfernand          #+#    #+#             */
/*   Updated: 2022/01/21 16:25:41 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;
	int	contador;

	i = 0;
	contador = 0;
	while (s[i] != '\0')
	{
		i++;
		contador++;
	}
	return (contador);
}
