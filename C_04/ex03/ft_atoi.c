/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:39:55 by jgetgood          #+#    #+#             */
/*   Updated: 2022/06/01 17:32:06 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_whitespace(char *str, int *ptr)
{
	int	counter;
	int	i;

	i = 0;
	counter = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			counter *= -1;
		i++;
	}
	*ptr = i;
	return (counter);
}

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = ft_whitespace(str, &i);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	res *= sign;
	return (res);
}

/*int	main()
{
	char	str1[] = "---+--+1234a567";
	int	val = ft_atoi(str1);
	printf ("%d", val);
	return (0);
}*/
