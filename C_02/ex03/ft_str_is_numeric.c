/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:50:18 by jgetgood          #+#    #+#             */
/*   Updated: 2022/05/28 15:51:30 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_numbers(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_numbers(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_str_is_numeric("69420"));
	printf("%d", ft_str_is_numeric("Megachad420"));
	printf("%d", ft_str_is_numeric(""));
	return (0);
}*/
