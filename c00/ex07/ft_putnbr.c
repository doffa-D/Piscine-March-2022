/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:49:22 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/04/02 22:41:55 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb)
{
	char	fst;
	char	sec;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		sec = (2) + '0';
		write(1, &sec, sizeof(sec));
		nb = 147483648;
	}
	if (nb >= 0 && nb < 10)
	{
		fst = nb + 48;
		write (1, &fst, sizeof(fst));
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb *(-1));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
