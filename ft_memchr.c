/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:21:18 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/10 12:21:20 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	if (!s)
		return (0);
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return (p + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	const unsigned char s[] = "42Porto!";
	int	c = '!';
	char *ft_found = ft_memchr(s, c, 8);
	char *found = memchr(s, c, 8);
	printf("ft_memchr: %s\n", ft_found);
	printf("memchr: %s\n", found);
	return (0);
}*/
