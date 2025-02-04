/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 09:57:27 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/21 15:00:18 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include<stdio.h>

int main(void)
{
	int nr1;
	int nr2;

	nr1 = 3;
	nr2 = 2;

	int div;
	int mod;

	ft_div_mod(nr1, nr2, &div, &mod);

	printf("Resultado da divisao %d\n", div);
	printf("Resultado do resto %d\n", mod);

}

