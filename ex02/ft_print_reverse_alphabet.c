/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfararan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:24:08 by nfararan          #+#    #+#             */
/*   Updated: 2023/11/29 14:24:38 by nfararan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	const char	a = 97;
	char		z;

	z = 122;
	while (a <= z)
	{
		write(1, &z, 1);
		z--;
	}
}
