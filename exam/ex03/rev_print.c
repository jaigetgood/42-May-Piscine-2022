/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:39:57 by jgetgood          #+#    #+#             */
/*   Updated: 2022/06/09 15:01:25 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] !=  '\0')
		i++;
	return (i);
}

char *ft_rev_print(char *str)
{
	int index;

	index = ft_strlen(str);
	index--;
	while (index >= 0)
	{
		write (1, &str[index],  1);
		index--;
	}
	return (str);
}

int	main()
{
	char	str[] = "1337Piscine42";
	ft_rev_print(str);
}
