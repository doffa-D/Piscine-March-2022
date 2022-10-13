/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 00:41:10 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/04/12 00:41:28 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int main (int ac, char **av)
{
	int i;
	i = 1;	
	t_stock_str *po = ft_strs_to_tab(ac , av);
	while (i < ac)
	{
		printf("%d		%s		%s\n", po[i].size ,po[i].str, po[i].copy);
		i++;
	}
	return (0);
}