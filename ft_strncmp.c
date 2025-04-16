/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 09:16:37 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/10 09:20:30 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///ft_strncmp: Compares the first n bytes of s1 and s2;
///const char *s1: Pointer to the first string;
///const char *s2: Pointer to the second string;
///size_t n: Number of bytes to compare;
///RETURN: SUCCESS: 0;
///RETURN: FAILURE: Lexicographical difference;

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < n)
		i++;
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	const char s1[] = "";
	const char s2[] = "";
	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, 7));
	printf("strncmp: %d\n", strncmp(s1, s2, 7));
	return (0);
}*/
