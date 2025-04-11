/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:13:00 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/11 15:48:07 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	to_alloc;
	int		*array;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	to_alloc = nmemb * size;
	array = (void *)malloc(to_alloc);
	if (!array)
		return (0);
	ft_bzero(array, to_alloc);
	return (array);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	size_t	nmemb = 4;
	size_t	size = sizeof(int);
	void	*ptr = malloc(nmemb * size);
	printf("%p\n", &ptr);
	printf("%s\n", (char *)ptr);
	printf("ft_calloc: %s\n", (char *)ft_calloc(nmemb, size));
	printf("calloc: %s\n", (char *)calloc(nmemb, size));
	return (0);
}*/
