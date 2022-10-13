/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c 19-44-51-094.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:50:00 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/04/11 19:50:01 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_boolean.h"

void ft_putstr(char *str)
{
    while (*str)
        write(1,str++,1);
}

t_bool ft_is_even(int nbr)
{
    return ((EVEN(nbr)) ? TRUE : FALSE);
}

int main(int argc, char **argv)
{
    (void)argv;
    if (ft_is_even(argc - 1) == TRUE)
        ft_putstr("I have an even number of arguments.");
    else
        ft_putstr("I have an odd number of arguments.");
    return (0);
}