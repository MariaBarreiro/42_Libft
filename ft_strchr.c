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

///ft_strchr: Searches for the first occurrence of the char c;
///const char *s: String to be searched;
///int c: Char to search for;
///RETURN: SUCCESS: Pointer to he first occurrence of the char c in the str s;

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

#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char *input = "42Porto";
	int to_find = 'o'; // You can change this to test other characters

	char *ft_result = ft_strchr(input, to_find);
	char *libc_result = strchr(input, to_find);

	printf("ft_strchr : %s\n", ft_result ? ft_result : "NULL");
	printf("strchr    : %s\n", libc_result ? libc_result : "NULL");

	if (ft_result == libc_result)
		printf("MATCH (same pointer)\n");
	else if (ft_result && libc_result && strcmp(ft_result, libc_result) == 0)
		printf("MATCH (same string content)\n");
	else
		printf("MISMATCH\n");

	return 0;
}
