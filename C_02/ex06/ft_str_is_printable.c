/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:50:18 by jgetgood          #+#    #+#             */
/*   Updated: 2022/05/28 17:53:28 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_printchar(char c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_printchar(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_str_is_printable("das"));
	printf("%d", ft_str_is_printable("iamspeed"));
	printf("%d", ft_str_is_printable(""));
	return (0);
}*/
