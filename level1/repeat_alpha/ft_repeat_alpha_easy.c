/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_alpha_easy.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:28:52 by pasmadja          #+#    #+#             */
/*   Updated: 2022/04/13 01:22:56 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_repeat_alpha(char *str)
{
    int i;

    i = 0;
    while (*str)
    {
        if (*str >= 'a' || *str <= 'z')
            i = *str - 'a' + 1;
        else if (*str >= 'A' || *str <= 'Z')
            i = *str - 'A' + 1;
        else;
        while (i > 0)
        {
            write(1, str, 1);
            i--;
        }
        str++;
    }
    write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_repeat_alpha(argv[1]);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
