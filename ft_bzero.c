/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:12:55 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/09 11:14:26 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

///ft_bzero: Sets the first n bytes of the memory area pointed to by s to 0;
///void *s: Memory area;
///size_t n: Number of bytes to be set to 0;

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char str[] = "Hello World";
	ft_bzero(str, 5);
	bzero(str, 5);
	printf("ft_bzero: %s\n", str);
	printf("bzero: %s", str);
	return (0);
}*/
