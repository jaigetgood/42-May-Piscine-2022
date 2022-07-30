/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 10:12:22 by jgetgood          #+#    #+#             */
/*   Updated: 2022/06/08 14:56:04 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*buff;
	int	*deez;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	range = max - min;
	buff = malloc(range * sizeof(int));
	deez = buff;
	if (!deez)
	{
		return (0);
	}
	while (i < range)
	{
		buff[i] = min + i;
		i++;
	}
	return (buff);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 21;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
