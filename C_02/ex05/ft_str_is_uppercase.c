/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:50:18 by jgetgood          #+#    #+#             */
/*   Updated: 2022/05/28 18:22:25 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_uppercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_str_is_uppercase("DEDICATEDWAM"));
	printf("%d", ft_str_is_uppercase("sugonDEESE?"));
	printf("%d", ft_str_is_uppercase(""));
	return (0);
}*/
