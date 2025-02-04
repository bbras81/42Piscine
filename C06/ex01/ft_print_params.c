/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:28:33 by brunmigu          #+#    #+#             */
/*   Updated: 2025/02/03 17:19:04 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	count;
	int	let;

	count = 1;
	while (count < argc)
	{
		let = 0;
		while (argv[count][let])
		{
			write(1, &argv[count][let], 1);
			let ++;
		}
		write(1, "\n", 1);
		count++;
	}
}
