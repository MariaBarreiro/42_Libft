/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:31:48 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/09 09:34:47 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///ft_isascii: Check if char is ascii;
///int c: char to check;
///RETURN: SUCCESS: c:
///RETURN: FAILURE: 0;

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main()
{
	int	c = '4';
	printf("ft_isascii: %d\n", ft_isascii(c));
	printf("isascii: %d", isascii(c));
}*/
