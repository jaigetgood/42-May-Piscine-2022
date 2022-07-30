/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:11:10 by jgetgood          #+#    #+#             */
/*   Updated: 2022/05/30 12:39:39 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src [b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

/*int	main()
{
	char	src[] = "mcqueen";
	char	dest[] = "lightning";
	
	printf("%s", ft_strcat(dest, src));
}*/
