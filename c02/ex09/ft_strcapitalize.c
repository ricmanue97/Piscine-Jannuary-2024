/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:04:56 by ricmanue          #+#    #+#             */
/*   Updated: 2024/02/02 22:32:39 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowcase(char*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] +32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	ii;
	int	a;

	a = 0;
	ii = 1;
	ft_lowcase(str);
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			if (ii == 1)
			{
				str[a] = str[a] -32;
				ii = 0;
			}
		}
		else if (str[a] >= '0' && str[a] <= '9')
			ii = 0;
		else
			ii = 1;
		a++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "";
	prinf("%s", ft_strcapitalize(str));
	return (0);
}
*/
