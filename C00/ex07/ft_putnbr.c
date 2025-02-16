/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 11:09:12 by brunmigu          #+#    #+#             */
/*   Updated: 2025/02/16 11:19:49 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }
void ft_putnbr(int nb) {
  char nbr;
  int number;
  while () {
  }

  nbr = nb + '0';
  ft_putchar(nbr);
}

int main() {
  ft_putnbr(4);
  return (0);
}
