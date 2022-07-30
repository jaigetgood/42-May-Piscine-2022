/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:05:18 by jgetgood          #+#    #+#             */
/*   Updated: 2022/05/28 16:17:54 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str [i] += 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "LIGHTNINGSonSPEED";
	printf("%s", ft_strlowcase(str));
	return (0);
}*/
