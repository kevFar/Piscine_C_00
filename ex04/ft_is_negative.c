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

void	ft_is_negative(int n)
{
	const char	n_char = 78;
	const char	p_char = 80;

	if (n < 0)
	{
		write(1, &n_char, 1);
	}
	else
	{
		write(1, &p_char, 1);
	}
}
