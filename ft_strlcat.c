/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:35:09 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/11 10:36:15 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = ft_strlen(dst);
	k = ft_strlen(src);
	if (size == 0)
		return (k);
	if (size <= j)
		return (size + k);
	while (src[i] && j < (size - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (j + k);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main()
{
	char dst[] = "Porto";
	const char src[] = "42Porto";
	printf("ft_strlcat: %zu\n", ft_strlcat(dst, src, 11));
	printf("strlcat: %zu\n", strlcat(dst, src, 11));
	return (0);
}*/
