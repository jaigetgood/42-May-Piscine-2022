/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:50:18 by jgetgood          #+#    #+#             */
/*   Updated: 2022/05/28 15:51:37 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_alphabet(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_alphabet(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_str_is_alpha("didyougotosawcon"));
	printf("%d", ft_str_is_alpha("haha69gotem"));
	printf("%d", ft_str_is_alpha(""));
	return (0);
}*/
