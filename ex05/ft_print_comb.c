/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtanaka <rtanaka@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 02:59:13 by rtanaka           #+#    #+#             */
/*   Updated: 2022/02/15 05:07:46 by rtanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	alg0;
	char	alg1;
	char	alg2;

	alg0 = '0';
	while (alg0 <= '7')
	{
		alg1 = alg0 + 1;
		while (alg1 <= '8')
		{
			alg2 = alg1 + 1;
			while (alg2 <= '9')
			{
				write (1, &alg0, 1);
				write (1, &alg1, 1);
				write (1, &alg2, 1);
				if (!(alg0 == '7' && alg1 == '8' && alg2 == '9'))
					write (1, ", ", 2);
				alg2++;
			}
			alg1++;
		}
		alg0++;
	}
}
