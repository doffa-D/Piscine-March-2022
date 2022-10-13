/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 11:17:14 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/03/29 11:11:30 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	s;
	int	length;

	i = 0;
	length = size - 1;
	while (i < (size / 2))
	{
		s = tab[i];
		tab[i] = tab[length - i];
		tab[length - i] = s;
		i++;
	}
}
