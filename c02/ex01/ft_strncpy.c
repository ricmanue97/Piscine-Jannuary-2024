/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:20:47 by ricmanue          #+#    #+#             */
/*   Updated: 2024/02/02 22:20:16 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	len;

	len = 0;
	while ((len < n) && (src[len] != '\0'))
	{
		dest[len] = src[len];
		len++;
	}
	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char src[] = "12138283776 4929299387 877487745";
	char dest[50];

	printf("%s\n", ft_strncpy(dest, src, 37));
}
*/
