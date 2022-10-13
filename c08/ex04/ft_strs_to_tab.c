/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:55:14 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/04/12 15:31:01 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *str)
{
	int		i;
	int		len;
	char	*cpy;

	i = 0;
	len = ft_strlen(str);
	cpy = (char *)malloc((len + 1) * sizeof(char));
	if (!cpy)
		return (0);
	while (i < len)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	i = 0;
	tab = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!tab)
		return (0);
	while (i < ac && av)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strcpy(av[i]);
		i++;
	}
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}
