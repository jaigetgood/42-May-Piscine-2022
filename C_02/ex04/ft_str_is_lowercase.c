/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:50:18 by jgetgood          #+#    #+#             */
/*   Updated: 2022/07/07 16:17:15 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_lowercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d", ft_str_is_lowercase("wombocombo"));
	printf("%d", ft_str_is_lowercase("ohBABYATRIPLE2"));
	printf("%d", ft_str_is_lowercase(""));
	return (0);
}
