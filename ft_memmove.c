/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:22:51 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/09 13:23:05 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (src > dest)
		return (ft_memcpy(dest, src, n));
	else if (src < dest)
	{
		while (n)
		{
			d[n] = s[n];
			n--;
		}
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	unsigned char d[] = "Help please";
	unsigned char s[] = "Hello World";
	printf("src: %s\ndest: %s\n", s, d);
	printf("ft_memmove: %s\n", ft_memcpy(d, s, 5));
	printf("memmove: %s", memmove(d, s, 5));
	return (0);
}
