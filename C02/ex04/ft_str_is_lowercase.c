/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:52:12 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/22 16:23:05 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] < 97 || str[count] > 122)
			return (0);
		count ++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	int result;

	char *str = "eeesbfsva";
	
	result = ft_str_is_lowercase(str);
	printf("%d", result);
}*/
