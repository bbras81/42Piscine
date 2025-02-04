/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:44:34 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/29 15:44:38 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	des_count;
	int	src_count;

	des_count = 0;
	src_count = 0;
	while (dest[des_count])
	{
		des_count ++;
	}
	while (src[src_count])
	{
		dest[des_count] = src[src_count];
		des_count ++;
		src_count ++;
	}
	dest[des_count] = 0;
	return (dest);
}
/*
#include <stdio.h>


int main() {
  char str1[] = "Ola ";
  char str2[] = "Mundo!";
  char *final;

	final = ft_strcat(str1, str2);
	printf("%s", final);
}*/
