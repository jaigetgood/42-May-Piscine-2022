/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:17:09 by jgetgood          #+#    #+#             */
/*   Updated: 2022/06/09 14:39:20 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	write_number(int nbr)
{
	if (nbr > 9)
		write_number(nbr/10);
	write (1, &"0123456789"[nbr % 10], 1);
}

int	main(void)
{
	int	min;
	int	max;
	
	min = 1;
	max = 100;
	while (min <= max)
	{
		if (min % 3 == 0 && min % 5 == 0)
		{
			write (1, "fizzbuzz\n", 9);
		}
		else if (min % 3 == 0)
		{
			write (1, "fizz\n", 5);
		}
		else if (min % 5 == 0)
		{
			write (1, "buzz\n", 5);
		}
		else
		{
			write_number(min);
			write(1, "\n", 1);
		}
		min++;
	}
}
