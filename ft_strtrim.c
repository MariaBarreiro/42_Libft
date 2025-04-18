/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:44:45 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/12 14:45:46 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///s1: String to be trimmed;
///set: The string containing the set of characters to be removed;
///RETURN: SUCCESS: Trimmed string;
///RETURN: FAILURE: Null;

static int	ft_istrim(char c, const char *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		i;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_istrim(s1[start], set))
		start++;
	while (end >= start && ft_istrim(s1[end], set))
		end--;
	dest = ft_calloc((end - start + 2), sizeof(char));
	if (!dest)
		return (0);
	i = 0;
	while (start <= end)
		dest[i++] = s1[start++];
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char const s1[] = "+++42Porto+++";
	char const set[] = "+";
	printf("ft_strtrim: %s\n", ft_strtrim(s1, set));
	return (0);
}*/
