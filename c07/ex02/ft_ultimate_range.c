/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:26:44 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/04/14 19:30:36 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc(len * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < len)
	{
		range[0][i] = min + i;
		i++;
	}
	return (len);
}
