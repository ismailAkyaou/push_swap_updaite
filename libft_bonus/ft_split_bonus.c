/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:48:32 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/26 16:41:06 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

static int	count_word(char *str, char cp)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] != '\0' && str[i] != cp)
			i++;
		count++;
		while (str[i] != '\0' && str[i] == cp)
			i++;
	}
	return (count);
}

static int	ft_calcule(char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
			i++;
	return (i);
}

static char	**delete_free(char **str)
{	
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	**ft_append(char **str, char *s1, char c, int count)
{
	int	j;
	int	cn;

	j = 0;
	cn = 0;
	while (j < count)
	{
		while (*s1 == c)
			s1++;
		cn = ft_calcule(s1, c);
		if (cn > 0)
		{
			str[j] = ft_substr(s1, 0, cn);
			if (str[j] == NULL)
				return (delete_free(str));
			s1 = s1 + cn;
		}
		j++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int			count;
	char		**str;
	char		*s1;
	int			j;

	j = 0;
	if (!s)
		return (NULL);
	s1 = (char *)s;
	while (*s1 && *s1 == c)
		s1++;
	count = count_word(s1, c);
	str = (char **)malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (NULL);
	str = ft_append(str, s1, c, count);
	str[count] = 0;
	return (str);
}
