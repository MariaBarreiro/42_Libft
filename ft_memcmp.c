/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:44:39 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/10 13:44:43 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///ft_memcmp: Compares the first n bytes of s1 and s2;
///const void *s1: Pointer to the first memory area;
///const void *s2: Pointer to the second memory area;
///size_t n: Maximum number of bytes to search for;
///RETURN: SUCCESS: Pointer to the first occurrence of c in s;
///RETURN: FAILURE: 0;

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p;
	unsigned char	*t;
	size_t			i;

	p = (unsigned char *)s1;
	t = (unsigned char *)s2;
	i = 0;
	while (p[i] == t[i] && p[i] && i < n)
		i++;
	if (i < n)
		return (p[i] - t[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	const unsigned char s1[] = "abcdef";
	const unsigned char s2[] = "abcdeg";
	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, 6));
	printf("memcmp: %d\n", memcmp(s1, s2, 6));
	return (0);
}*/
