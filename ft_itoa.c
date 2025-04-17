/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:06:40 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/14 19:54:42 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///ft_itoa: Allocates memory and returns a string representing the integer
///			received as an argument.
///n: The integer to convert.
///RETURN: SUCCESS: The string representing the integer.
///RETURN: FAILURE: Null.

char			*ft_char(char *str, unsigned int nb, long int len);
unsigned int	ft_countdigits(int n);

char	*ft_itoa(int n)
{
	long			nb;
	long int		len;
	char			*str;

	nb = n;
	len = ft_countdigits(n);
	if (nb == 0)
		return (ft_strdup("0"));
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	if (nb < 0)
	{
		nb = -n;
		str[0] = '-';
	}
	str = ft_char(str, nb, (len - 1));
	str[len] = '\0';
	return (str);
}

unsigned int	ft_countdigits(int n)
{
	unsigned int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_char(char *str, unsigned int nb, long int len)
{
	while (nb > 0)
	{
		str[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	int	tests[] = {
		0,
		1,
		-1,
		42,
		-42,
		123456,
		-123456,
		2147483647,    // INT_MAX
		-2147483648    // INT_MIN
	};
	int	count = sizeof(tests) / sizeof(tests[0]);
	int	i = 0;

	while (i < count)
	{
		int n = tests[i];
		char *result = ft_itoa(n);
		printf("  ft_itoa: %s\n", result ? result : "NULL");
		printf("--------------------------\n");
		free(result); // make sure to free!
		i++;
	}
	return 0;
}*/
