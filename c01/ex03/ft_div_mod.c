/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:58:16 by ricmanue          #+#    #+#             */
/*   Updated: 2024/01/30 14:42:10 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int main	()
{
	int a = 50;
	int b = 45;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);

	printf("%d", div);
	printf("\n %d", mod);
}*/