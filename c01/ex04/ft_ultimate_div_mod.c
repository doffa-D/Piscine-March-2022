/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:42:24 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/03/28 13:03:28 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	dv;
	int	mod;

	dv = *a / *b;
	mod = *a % *b;
	*a = dv;
	*b = mod;
}
