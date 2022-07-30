/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:04:03 by jgetgood          #+#    #+#             */
/*   Updated: 2022/05/30 12:39:00 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < nb && src[b] != '\0')
	{
		dest[a + b] = src [b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}

/*int	main()
{
	char	src[] = "Killua";
	char	dest[] = "Gon";
	printf("%s", ft_strncat(dest, src, 4));
}*/
