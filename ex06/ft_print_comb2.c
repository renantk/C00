/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtanaka <rtanaka@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:32:24 by rtanaka           #+#    #+#             */
/*   Updated: 2022/02/15 05:05:20 by rtanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_integer(int input)
{
	char	alg_0;
	char	alg_1;

	alg_0 = input / 10 + '0';
	alg_1 = input % 10 + '0';
	write (1, &alg_0, sizeof(char) * 1);
	write (1, &alg_1, sizeof(char) * 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_write_integer(n1);
			write (1, " ", 1);
			ft_write_integer(n2);
			if (!(n1 == 98 && n2 == 99))
				write (1, ", ", 2);
			n2++;
		}
		n1++;
	}
}
