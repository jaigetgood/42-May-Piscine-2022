/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:42:45 by jgetgood          #+#    #+#             */
/*   Updated: 2022/05/25 14:48:24 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print( int deez, char begin_char, char middle_char, char end_char)
{
	int	letter_counter;

	letter_counter = 1;
	while (letter_counter <= deez)
	{
		if (letter_counter == 1)
			ft_putchar(begin_char);
		else if (letter_counter == deez)
			ft_putchar(end_char);
		else
			ft_putchar(middle_char);
		letter_counter++;
	}
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	int	line_counter;

	line_counter = 1;
	if (a >= 1 && b >= 1)
	{
		while (line_counter <= b)
		{
			if (line_counter == 1)
				ft_print(a, 'A', 'B', 'C');
			else if (line_counter == b)
				ft_print(a, 'C', 'B', 'A');
			else
				ft_print(a, 'B', ' ', 'B');
			line_counter++;
		}
	}
}
