/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:26:59 by jgetgood          #+#    #+#             */
/*   Updated: 2022/06/01 13:01:16 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	deez;

	deez = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		deez *= nb;
		--power;
	}
	return (deez);
}

/*int	main()
{
	printf("%d", ft_iterative_power(4, 4));
	return (0);
}*/
