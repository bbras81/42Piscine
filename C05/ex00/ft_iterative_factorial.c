/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:26:51 by brunmigu          #+#    #+#             */
/*   Updated: 2025/02/03 15:03:59 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb >= 2)
	{
		fac *= (nb - 1);
		nb --;
	}
	return (fac);
}
/*
#include <stdio.h>
int main() {
  int number;

  number = 5;
  printf("%d", ft_iterative_factorial(number));
  return (0);
	}*/
