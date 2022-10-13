/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:21:25 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/04/02 23:41:32 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	while (dest[x] != 0)
	{
		x++;
	}
	y = 0;
	while (src[y] != 0 && y < nb)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = 0;
	return (dest);
}
