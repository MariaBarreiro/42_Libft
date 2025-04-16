/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:39:12 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/09 09:39:43 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///ft_strlen: Take length of the string;
///const char *str: Pointer to the string;
///RETURN: SUCCESS: Length of the string;

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	const char *str = "Porto";
	printf("ft_strlen: %lu\n", ft_strlen(str));
	printf("strlen: %lu", strlen(str));
	return(0);
}*/
