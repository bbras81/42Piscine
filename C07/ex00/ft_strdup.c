/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:57:19 by brunmigu          #+#    #+#             */
/*   Updated: 2025/02/04 10:55:02 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count ++;
		str ++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	int		count;
	char	*cpy;

	count = 0;
	cpy = malloc(ft_strlen(src) + 1);
	if (cpy)
	{
		while (src[count])
		{
			cpy[count] = src[count];
			count ++;
		}
		cpy[count] = 0;
	}
	else
		return (0);
	return (cpy);
}
/*
#include <stdio.h>
int	main()
{
	char *str = "Hello World";

	printf("%s\n",ft_strdup(str));		
}*/
