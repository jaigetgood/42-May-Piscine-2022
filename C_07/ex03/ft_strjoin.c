/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:29:26 by jgetgood          #+#    #+#             */
/*   Updated: 2022/06/07 16:10:20 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_final_len(char **strings, int size, int sep_len)
{
	int	final_len;
	int	i;

	final_len = 0;
	i = 0;
	while (i < size)
	{
		final_len += ft_strlen(strings[i]);
		final_len += sep_len;
		i++;
	}
	final_len -= sep_len;
	return (final_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_len;
	int		i;
	char	*string;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_len = ft_final_len(strs, size, ft_strlen(sep));
	string = (char *)malloc((full_len + 1) * sizeof(char));
	d = string;
	if (!d)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy (d, strs[i]);
		d += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_strlen(sep);
		}
		i++;
	}
	return (string);
}

/*int	main(void)
{
	int		i;
	int		size;
	char	**strs;
	char	*seperator;
	char	*res;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = "Hello";
	strs[1] = "little";
	strs[2] = "moulinette, this is your doom";
	seperator = " ";
	res = ft_strjoin(size, strs, seperator);
	printf("%s\n", res);
	free (res);
}*/
