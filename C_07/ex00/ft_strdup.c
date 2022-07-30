/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:40:00 by jgetgood          #+#    #+#             */
/*   Updated: 2022/06/07 16:09:40 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new;
	char	*d;
	int		i;

	i = 0;
	d = ((new = (char *) malloc(ft_strlen(src) * sizeof(char) + 1)));
	if (!d)
	{
		return (0);
	}
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}

/*int	main(int argc, char **argv)
{
	char	*mine;
	char	*theirs;

	if (argc == 2)
	{
		mine = ft_strdup(argv[1]);
		theirs = strdup(argv[1]);
		printf("%s\n%s\n", mine, theirs);
	}
	return (0);
}*/
