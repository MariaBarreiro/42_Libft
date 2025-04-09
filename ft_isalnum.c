/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:21:39 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/09 09:25:50 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main()
{
	int c = 'a';
	printf("ft_isalnum: %d\n", ft_isalnum(c));
	printf("isalnum: %d", isalnum(c));
	return (0);
}*/
