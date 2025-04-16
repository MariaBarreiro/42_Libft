/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:17:47 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/10 16:14:59 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///ft_strnstr: Search for first occurence of a substring;
///const char *big: Pointer to the string to be searched;
///const char *little: Pointer to the string to search for;
///size_t len: Length of the string;
///RETURN: SUCCESS: Pointer to the substring;
///RETURN: FAILURE: Null;

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + j] && big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (!little[j])
				return ((char *)(big + i));
		}
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int	main()
{
	const char big[] = "455694045";
	const char small[] = "40";
	printf("ft_strnstr: %s\n", ft_strnstr(big, small, 10));
	printf("strnstr: %s\n", strnstr(big, small, 10));
	return (0);
}*/
