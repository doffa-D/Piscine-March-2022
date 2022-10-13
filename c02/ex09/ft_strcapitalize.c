/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:46:19 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/03/31 21:26:39 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	while (*str != 0)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	nonprintable;

	i = 0;
	nonprintable = 1;
	ft_strlowcase(str);
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (nonprintable == 1)
				str[i] -= 32;
			nonprintable = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			nonprintable = 0;
		}
		else
		{
			nonprintable = 1;
		}
		i++;
	}
	return (str);
}
