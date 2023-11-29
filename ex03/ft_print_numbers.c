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

void	ft_print_numbers(void)
{
	char		number;
	const char	nine = 57;

	number = 48;
	while (number <= nine)
	{
		write(1, &number, 1);
		number++;
	}
}
