/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:48:25 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/25 22:35:23 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bouns.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)

{
	size_t			i;
	unsigned char	*a1;
	unsigned char	*a2;

	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)a1[i] != (unsigned char)a2[i])
			return ((unsigned char)a1[i] - (unsigned char)a2[i]);
		i++;
	}
	return (0);
}
