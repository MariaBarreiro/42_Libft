/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:27:59 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/09 16:38:02 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	const char str[] = "42Porto";
	int	c = 'o';
	printf("ft_strchr: %s\n", ft_strchr(str, c));
	printf("strchr: %s", strchr(str, c));
	return (0);
}*/
