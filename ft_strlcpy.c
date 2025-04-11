/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 08:05:20 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/11 08:58:53 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main()
{
	char dst[] = "Porto";
	const char src[] = "!";
	printf("ft_strlcpy: %zu\n", ft_strlcpy(dst, src, 4));
	printf("strlcpy: %zu\n", strlcpy(dst, src, 4));
	return(0);
}*/
