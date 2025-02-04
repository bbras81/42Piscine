/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:42:53 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/21 10:56:54 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

int main()
{
	int a;
	int b;

	a = 5;
	b = 3;
	ft_ultimate_div_mod(&a, &b);

	printf("division = %d\n", a);
	printf("modolo = %d\n", b);

}
*/
