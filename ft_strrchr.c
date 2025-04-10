/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 07:55:40 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/10 07:55:42 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	i = 0;
	p = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == (char)c)
			p = ((char *)(s + i));
		i++;
	}
	if (s[i] == (char) c)
		return ((char *)(s + i));
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	const char s[] = "42Porto!";
	int	c = 'o';
	printf("ft_strrchr: %s\n", ft_strrchr(s, c));
	printf("strrchr: %s", strrchr(s, c));
	return (0);
}
