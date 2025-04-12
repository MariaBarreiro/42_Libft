/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 10:30:25 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/12 11:18:19 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///s1: preffix string;
///s2: suffix string;
///RETURN: SUCCESS: new string;
///RETURN: FAILURE: null;

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		k;
	size_t		l;
	size_t		i;
	size_t		j;
	char		*join;

	k = ft_strlen(s1);
	l = ft_strlen(s2);
	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	join = (char *)malloc((k + l + 1) * sizeof(char));
	if (!join)
		return (0);
	while (i < k)
		join[j++] = s1[i++];
	i = 0;
	while (i < l)
		join[j++] = s2[i++];
	join[j] = '\0';
	return (join);
}
/*
#include <stdio.h>

int	main()
{
	char const s1[] = "Quero ir dormir!";
	char const s2[] = "Ja chega!";
	printf("ft_strjoin: %s\n", ft_strjoin(s1, s2));
	return (0);
}*/
