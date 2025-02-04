/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:27:07 by brunmigu          #+#    #+#             */
/*   Updated: 2025/02/03 17:34:08 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	count;
	int	let;

	count = argc - 1;
	while (count >= 1)
	{
		let = 0;
		while (argv[count][let])
		{
			write(1, &argv[count][let], 1);
			let ++;
		}
		write(1, "\n", 1);
		count--;
	}
}
