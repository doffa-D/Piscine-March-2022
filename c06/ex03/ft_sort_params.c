/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:42:05 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/04/07 22:12:43 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != 0 && *s2 != 0)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			break ;
		}
	}
	return (*s1 - *s2);
}

char	**ft_sorting_args(int argc, char **argv)
{
	int		i;
	int		j;
	int		size;
	char	*swap;

	i = 1;
	size = argc - 1;
	while (i <= size)
	{
		j = 0;
		while (argv[i + j] && i <= size - j)
		{
			if (ft_strcmp(argv[i], argv[i + j]) > 0)
			{
				swap = argv[i + j];
				argv[i + j] = argv[i];
				argv[i] = swap;
			}
			j++;
		}
		i++;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	int	y;

	y = 1;
	argv = ft_sorting_args(argc, argv);
	while (y < argc)
	{
		while (*argv[y])
		{
			write(1, &*argv[y], 1);
			argv[y]++;
		}
		write(1, "\n", 1);
		y++;
	}
	return (0);
}
