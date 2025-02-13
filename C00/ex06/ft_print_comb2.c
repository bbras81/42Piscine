/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 08:49:35 by brunmigu          #+#    #+#             */
/*   Updated: 2025/02/12 09:28:38 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print_comb2(void)
{
	char d0;
	char d1;
	char d2;
	char d3;

	d0 = '0';
	d1 = '0';
	d2 = '0';
	d3 = '0';

	while (d3 <= '9')
	{
		write(1, &d3, 1);
		write(1, &d2, 1);
		write(1, " ", 1);
		write(1, &d1, 1);
		write(1, &d0, 1);
		write(1, ",", 1);
		write(1, " ", 1);
		if (d0 == '9')
		{
			d0 = '0';
			d1 ++;
		}
		if (d1 && d0 == '9')
		{
			d0 = '0';
			d1 = '0';
			d2 ++;
		}
		d0 ++;
	}
}

int main()
{
	ft_print_comb2();
	return (0);
}
