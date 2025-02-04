/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:53:52 by brunmigu          #+#    #+#             */
/*   Updated: 2025/02/03 15:13:43 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	nbr;

	nbr = nb;
	count = 0;
	if (power == 0)
		return (1);
	while (count != power - 1)
	{
		nb *= nbr;
		count++;
	}
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_power(5, 2));
}*/
