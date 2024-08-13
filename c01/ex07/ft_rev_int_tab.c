/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:02:25 by ricmanue          #+#    #+#             */
/*   Updated: 2024/01/30 15:45:13 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		ri;
	int		swap;

	i = 0;
	ri = size - 1;
	while (i < ri)
	{
		swap = tab[i];
		tab[i] = tab[ri];
		tab[ri] = swap;
		i++;
		ri--;
	}
}
/*
#include<stdio.h>
int main()
{
        int tab[] = {5, 1, 2, 3, 4};
        int size = 5;        ft_rev_int_tab(tab, size);
        printf("%d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
}
*/