/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:43:19 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/29 15:43:24 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] != 0 && s2[count] != 0)
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count ++;
	}
	return (s1[count] - s2[count]);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char *str1 = "";
	char *str2 = "";

	printf("ft: %d", ft_strcmp(str1, str2));
	printf("og: %d", strcmp(str1, str2));
}*/
