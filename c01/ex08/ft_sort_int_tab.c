/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:45:32 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/03/28 21:45:39 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size -1)
	{
			j = 0;
		while (j < size -1)
		{
			if (tab[j] > tab[j + 1])
			{
					temp = tab[j + 1];
					tab[j + 1] = tab[j];
					tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}		
