/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:17:34 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/22 16:14:10 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] < 48 || str[count] > 57)
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
	char *str = "0";
	result = ft_str_is_numeric(str);
	printf("%d", result);
}*/
