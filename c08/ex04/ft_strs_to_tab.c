/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:55:14 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/04/11 22:03:36 by hdagdagu         ###   ########.fr       */
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

char *ft_strdup(char *src)
{
    char *dest;
    int i;
    int j;

    i = ft_strlen(src);
    j = 0;

    dest = malloc(sizeof(char) * 1);
    while(src[j])
    {
        dest[j] = src[j];
        j++;
    }
    dest[j] = 0;
    return (dest);
}

struct s_stock_str *ft_strs_to_tab(int ac,char **av)
{
    int i;
    int j;
    struct s_stock_str *stock_str;

    stock_str + malloc(sizeof(ft_stock_str))
    i = 0;
    while(i < ac)
    {
        stock_str[i].copy = ft_strlen(av[i]);
        stock_str[i].size = ft_strdup(av[i]);
        stock_str[i].str = av[i];
        i++;
    }
    stock_str[i].str = 0;
    free(stock_str);
    return (stock_str);
};
