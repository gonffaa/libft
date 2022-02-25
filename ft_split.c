/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:53:34 by gfernand          #+#    #+#             */
/*   Updated: 2022/02/21 14:32:45 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c);

static char		**ft_site(char **str, char const *s, char c);

static char		**ft_free(char **str, size_t count);

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**str;

	count = ft_count(s, c);
	str = (char **)malloc(sizeof(char *) *(count + 1));
	if (!str)
		return (NULL);
	ft_site(str, s, c);
	return (str);
}

static	size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 1;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i +1])
			count++;
		i++;
	}
	if (s[0] == c || s[0] == '\0')
		count--;
	return (count);
}

static	char	**ft_site(char **str, char const *s, char c)
{
	size_t	i;
	size_t	found;
	size_t	count;
	size_t	start;

	i = 0;
	found = 1;
	count = ft_count(s, c);
	while (found <= count)
	{
		if (s[i] != c)
		{
			start = i++;
			//i++;
			while (s[i] != c && s[i])
				i++;
			str[found - 1] = ft_substr(s, start, (i - 1) - start + 1);
			if (str[found - 1] == NULL)
				return (ft_free(str, found - 2));
			found++;
		}
		else
			i++;
	}
	str[found - 1] = NULL;
	return (str);
}

static char     **ft_free(char **str, size_t count)
{
    while (count >= 0)
    {
        free((void *)str[count]);
        count--;
    }
    free(count);
    return (NULL);
}

int	main (void)
{
	char	*s;
	char	c;

	c = ",";
	s = "hola, a , todos,,,jej";
}
