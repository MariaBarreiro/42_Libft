/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:49:29 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/09 13:20:13 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///ft_memcpy: Copies n bytes from memory area src to memory area dest;
///void *dest: POunter to the destination memory area;
///const void *src: POinter to the source memory area;
///size_t n: Number of bytes to be copied;
///RETURN: SUCCESS: Dest;
///RETURN: FAILURE: Null;

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	unsigned char d[] = "Help please";
	unsigned char s[] = "Hello World";
	printf("dest: %s\nsrc: %s\n", d, s);
	ft_memcpy(d, s, 5);
	memcpy(d, s, 5);
	printf("ft_memcpy: %s\n",d);
	printf("memcpy: %s", d);
	return (0);
}*/
