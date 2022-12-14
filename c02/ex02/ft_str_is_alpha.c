/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:40:49 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/03/31 21:17:54 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != 0)
	{
		if ((*str >= 'a' && *str <= 'z' ) || (*str >= 'A' && *str <= 'Z'))
			str++;
		else
			return (0);
	}
	return (1);
}
