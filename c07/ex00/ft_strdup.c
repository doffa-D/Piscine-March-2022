/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:25:20 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/04/14 18:31:20 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	dest = malloc(sizeof(char) * i);
	if (!dest)
		return ((char *) 0);
	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = 0;
	return (dest);
}
