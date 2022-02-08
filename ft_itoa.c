/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:17:23 by gfernand          #+#    #+#             */
/*   Updated: 2022/02/01 14:54:37 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_cantidad(int n);

static	char	*ft_smaller(char *min);

char	*ft_itoa(int n)
{
	char	*s;
	int		longi;
	int		i;

	longi = ft_cantidad(n);
	if (n == -2147483648)
		return (ft_smaller("-2147483648"));
	s = malloc(sizeof(char) * (longi + 1));
	if (!s)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		n = n * (-1);
	}
	i = longi - 1;
	while (n >= 10)
	{
		s[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	s[i] = (n % 10) + 48;
	s[longi] = '\0';
	return (s);
}

static	int	ft_cantidad(int n)
{
	int	contador;

	contador = 1;
	if (n < 0)
		contador++;
	while (n >= 10 || n <= -10)
	{
		n /= 10;
		contador++;
	}
	return (contador);
}

static	char	*ft_smaller(char *min)
{
	char	*str;
	int		j;

	str = malloc(sizeof(char) * 12);
	j = 0;
	while (j < 11)
	{
		*(str + j) = *(min + j);
		j++;
	}
	*(str + j) = '\0';
	return (str);
}
