/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:05:18 by jgetgood          #+#    #+#             */
/*   Updated: 2022/05/28 17:52:42 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str [i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "everyBODyneedsawaterBUFFallo";
	printf("%s", ft_strupcase(str));
	return (0);
}*/
