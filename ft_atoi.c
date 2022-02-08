/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:19:20 by gfernand          #+#    #+#             */
/*   Updated: 2022/01/26 17:01:42 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	maxmin(unsigned long long int result, int sig);

int	ft_atoi(const char *str)
{
	unsigned long long int	result;
	int						sig;
	int						i;

	i = 0;
	sig = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sig = sig * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - 48) + (result * 10);
		i++;
	}
	return (maxmin(result, sig));
}

static int	maxmin(unsigned long long int result, int sig)
{	
	if (result > 9223372036854775807 && sig < 0)
		return (0);
	else if (result > 9223372036854775807 && sig > 0)
		return (-1);
	return (((int) result * sig));
}
