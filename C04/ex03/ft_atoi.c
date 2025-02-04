/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:48:22 by brunmigu          #+#    #+#             */
/*   Updated: 2025/02/03 11:02:21 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	count;
	int	minus;
	int	result;

	minus = 1;
	result = 0;
	count = 0;
	while (str[count] == ' ' || (str[count] >= 9 && str[count] <= 13))
		count ++;
	while (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			minus *= -1;
		count ++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		result += (str[count]) - '0';
		result *= 10;
		count ++;
	}
	return (result / 10 * minus);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_atoi("\n  ----+-+1234ab567"));
	return (0);
}*/
