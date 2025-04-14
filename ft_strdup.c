/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:38:28 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/11 15:49:59 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	n;
	char	*dup;

	n = 0;
	i = ft_strlen(s);
	dup = (char *)malloc((i + 1) * sizeof(char));
	if (!dup)
		return (0);
	while (n < i)
	{
		dup[n] = s[n];
		n++;
	}
	dup[n] = '\0';
	return (dup);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char s[] = "";
	char *ft = ft_strdup(s);
	char *og = strdup(s);

	printf("ft_strdup: %s\n", ft);
	printf("strdup: %s\n", og);

	free(ft);
	free(og);
	return (0);
}*/
