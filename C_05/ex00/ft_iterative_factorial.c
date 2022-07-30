/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:46:05 by jgetgood          #+#    #+#             */
/*   Updated: 2022/06/02 17:50:59 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	deez;

	deez = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		deez *= nb;
		--nb;
	}
	return (deez);
}

/*int	main()
{
	printf("%d", ft_iterative_factorial(4));
	return (0);
}*/
