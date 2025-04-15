/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:39:11 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/15 18:17:21 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///ft_striteri: Applies the function 'f' to each char of the str passed
///						as an argument, passing its index as the 1st argument.
///s: String to iterate over;
///f: Function to apply to each char;
///NO RETURN VALUE;

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t		i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_to_upper(unsigned int i, char *c)
{
	(void)i;

	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

#include <stdio.h>

int	main()
{
	char s[] = "abcd";
	ft_striteri(s, ft_to_upper);
	printf("ft_striteri: %s\n", s); 
	return (0);
}*/
