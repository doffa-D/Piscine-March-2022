/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:27:22 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/04/14 19:33:02 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*text;
	int		i;
	int		t;
	int		s;

	i = 0;
	t = 0;
	text = malloc(sizeof(strs));
	while (i < size)
	{
		s = 0;
		while (strs[i][s])
			text[t++] = strs[i][s++];
		s = 0;
		while (sep[s] && i != size - 1)
			text[t++] = sep[s++];
		i++;
	}
	text[t] = 0;
	return (text);
}
