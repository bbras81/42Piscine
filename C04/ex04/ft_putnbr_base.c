/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:28:03 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/30 13:29:33 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_nbrs(char *prt_nbr)
{
	int count;
	
	count = 0;
	while (prt_nbr[count])
		count ++;
	while (count >= 0)
	{
		write (1, &prt_nbr[count], 1);
		count --;
	}
}

void putnbr_dec(int nbr)
{
	char	charachter[32];
	int count;

	count = 0;
	while (nbr > 10)
	{
		charachter[count] = (nbr % 10 + '0');
		nbr /= 10;
		count ++;
	}
	charachter[count] = (nbr + '0');
	print_nbrs(charachter);
}

void putnbr_bin(int nbr)
{	
	char charachter[32];
	int count;
	
	count = 0;
	while (nbr >= 2)
	{
		charachter[count] = (nbr % 2 + 48);
		nbr /= 2;
		count ++;
	}
	if (nbr == 1)
		charachter[count] = '1';
	else 
		charachter[count] = '0';
	print_nbrs(charachter);
}

void putnbr_hex(int nbr)
{
	char charachter[32];
	int count;

	count = 0;
	while (nbr > 16)
	{
		if (nbr < 10)
		{
			charachter[count] = (nbr % 16 + '0');
			nbr /= 16;
			count ++; 
		}
		else
		{
			charachter[count] = (nbr % 16 + 87);
			nbr /= 16;
			count ++; 
		}
	}
		if (nbr < 10)
			charachter[count] = (nbr % 16 + '0');
		else
			charachter[count] = (nbr % 16 + 87);
		print_nbrs(charachter);
}

void putnbr_oct(int nbr)
{
	char	charachter[32];
	int count;

	count = 0;
	while (nbr > 8)
	{
		charachter[count] = (nbr % 8 + '0');
		nbr /= 8;
		count ++;
	}
	charachter[count] = (nbr + '0');
	print_nbrs(charachter);
}

void ft_putnbr_base(int nbr, char *base)
{
	char dec[11];

	*dec = *base;
	//putnbr_dec(nbr);
	//putnbr_bin(nbr);
	//putnbr_hex(nbr);
	putnbr_oct(nbr);
}

int main(void)
{
	ft_putnbr_base(1214, "0123456789");
	return (0);
}
