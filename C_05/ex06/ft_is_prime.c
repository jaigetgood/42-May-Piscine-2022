/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:46:06 by jgetgood          #+#    #+#             */
/*   Updated: 2022/06/04 17:16:00 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}

/*int	main()
{
	printf("%d", ft_is_prime(122));
	return (0);
}*/
