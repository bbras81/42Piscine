/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 01:06:01 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/20 14:53:30 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	cents;
	int	tens;
	int	units;

	cents = '0';
	while (cents <= '7')
	{
		tens = cents + 1;
		while (tens <= '8')
		{
			units = tens + 1;
			while (units <= '9')
			{
				write(1, &cents, 1);
				write(1, &tens, 1);
				write(1, &units, 1);
				write(1, ",", 1);
				units ++;
			}
			tens ++;
		}
		cents ++;
	}
}
