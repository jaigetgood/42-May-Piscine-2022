/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:03:00 by jgetgood          #+#    #+#             */
/*   Updated: 2022/06/04 15:46:00 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	b;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	i = 2;
	if (b >= 2)
	{
		while (i * i <= b)
		{
			if ((i * i == b))
			{
				return (i);
			}
			++i;
		}
	}
	return (0);
}

/*int	main()
{
	printf("%d", ft_sqrt(1454436));
	return (0);
}*/
