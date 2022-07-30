/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:01:51 by jgetgood          #+#    #+#             */
/*   Updated: 2022/06/09 15:14:18 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc  > 1)
	{
		argc--;
		while (argv[argc][i] != '\0')
		{
			write (1, &argv[argc][i], 1);
			i++;
		}
	
	}
	write (1, "\n", 1); 
	return (0);
}
