/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:48:48 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/24 16:30:13 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bouns.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	str = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	if (!str)
		return (0);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = ' ';
	i++;
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
		str[i + j] = '\0';
	return (free((char *)s1), str);
}
