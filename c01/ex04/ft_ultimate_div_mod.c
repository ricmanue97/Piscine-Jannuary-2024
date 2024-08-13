/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:16:36 by ricmanue          #+#    #+#             */
/*   Updated: 2024/01/30 15:36:43 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	res;

	if (b != 0)
	{
		div = *a / *b;
		res = *a % *b;
		*a = div;
		*b = res;
	}
}
/*
#include<stdio.h>
int main()
{
        int a;
        int b;        
		a = 48;
        b = 20;        
		ft_ultimate_div_mod(&a, &b);
        printf("div a = %d mod b = %d\n", a, b);
}
*/