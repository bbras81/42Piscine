/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:32:34 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/28 11:17:13 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		(dest[count]) = (src[count]);
		count ++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count ++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *string = "Hello";
	char string_cpy[500];
	char str_cpy[500];
	int size = 3;

	ft_strncpy(string_cpy, string, size);
	strncpy(str_cpy, string, size);
	printf("ft: %s\n", string_cpy);
	printf("og: %s\n", str_cpy);
	return (0);
}*/
