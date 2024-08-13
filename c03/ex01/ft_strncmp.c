/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:06:01 by ricmanue          #+#    #+#             */
/*   Updated: 2024/02/05 14:49:38 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < (n - 1) && s1[i] == s2[i] && s1[i] != '\0' )
		i++;
	return (s1[i] - s2[i]);
}
/*
#include<stdio.h>
int main()
{
    char	s1[20] = "sou b ricardo";
	char	s2[20] = "sou a ric";
	
	int		a;

	a = ft_strncmp(s1, s2, 5);
	printf("result: %d\n", a);
}
*/