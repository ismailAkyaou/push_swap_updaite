/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:48:41 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/26 16:41:06 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	char	*src;
	size_t	i;
	size_t	x;

	s = (char *)s1;
	i = 0;
	x = ft_strlen(s) + 1;
	src = malloc(x);
	if (src == 0)
		return (NULL);
	while (s[i] && i <= x)
	{
		src[i] = s[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}
