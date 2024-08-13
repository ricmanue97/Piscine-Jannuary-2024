/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:37:30 by ricmanue          #+#    #+#             */
/*   Updated: 2024/02/11 13:49:04 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && i <= 46341)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}

/*   #include <stdio.h>
int main()
{
    printf("%d", ft_sqrt(2147483647));
    return (0);
} */