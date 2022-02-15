/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtanaka <rtanaka@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:48:09 by rtanaka           #+#    #+#             */
/*   Updated: 2022/02/15 05:09:05 by rtanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	sinal;

	if (n >= 0)
	{
		sinal = 'P';
		write(1, &sinal, 1);
	}
	else
	{
		sinal = 'N';
		write (1, &sinal, 1);
	}
}
