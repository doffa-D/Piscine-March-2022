/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:26:06 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/04/14 19:29:11 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*t;

	i = 0;
	len = max - min;
	if (min >= max)
		return (0);
	t = malloc(len * sizeof(int));
	if (!t)
		return ((int *)0);
	while (i < len)
	{
		t[i] = min + i;
		i++;
	}
	return (t);
}
