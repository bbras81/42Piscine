/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:44:53 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/29 15:44:56 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	src_count;
	unsigned int	des_count;

	des_count = 0;
	src_count = 0;
	while (dest[des_count])
	{
		des_count ++;
	}
	while (src_count < nb && src[src_count] != '\0')
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
#include <string.h>
int main() {
  char str1[] = "Ola mun";
  char str2[] = "do!";
  //char *final;
	char *final2;
	unsigned int nb;

	nb = 22;

	final2 = strncat(str1, str2, nb);
	//final = ft_strncat(str2, str1, nb);
	printf("ft: %s", final2);
	//printf("og: %s", final);
}*/
