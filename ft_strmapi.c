/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:40:21 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/15 17:38:39 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///ft_strmapi: Applies the function f to each char of the string s, 
///passing its index as the first argument and the char as the second.
///s: String to iterate over;
///f: Function to apply to each character;
///RETURN: SUCCESS: String created from the successive applications of 'f';
///RETURN: FAILURE: Null;

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*str;
	size_t		len;
	size_t		i;

	len = ft_strlen(s);
	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	ft_to_upper(unsigned int i, char c)
{
	(void)i;

	if(c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

#include <stdio.h>

int	main()
{
	char const	s[] = "abcd";
	char *ft_mapi = ft_strmapi(s, &ft_to_upper);
	printf("ft_strmapi: %s\n",ft_mapi); 
	return (0);
}*/
