/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:51:58 by ricmanue          #+#    #+#             */
/*   Updated: 2024/02/12 13:41:37 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0 && nb != 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (1);
}

/*  int main()
{
    int m;
    
    m = ft_recursive_power(1,0);
    printf("%d", m);
    return (0);
} */
