/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:22:03 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/22 16:06:32 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		(dest[count]) = (src[count]);
		count ++;
	}
	dest[count] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
	char *string = "Hello World!";
	char string_cpy[99];

	ft_strcpy(string_cpy, string);
	printf("%s", string_cpy);
	return (0);
}*/
