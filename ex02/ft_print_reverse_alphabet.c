/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtanaka <rtanaka@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 01:53:35 by rtanaka           #+#    #+#             */
/*   Updated: 2022/02/10 03:04:29 by rtanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	alfabetoreverso;

	alfabetoreverso = 'z';
	while (alfabetoreverso >= 97)
	{
		write(1, &alfabetoreverso, 1);
		alfabetoreverso = alfabetoreverso -1;
	}
}
