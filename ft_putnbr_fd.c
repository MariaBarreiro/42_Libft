/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 07:21:20 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/16 07:36:07 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///ft_putnbr_fd: Outputs the int 'n' to the specified file descriptor;
///int n: Integer to output;
///int fd: File descriptor on which to write:

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		write (fd, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd ((nb / 10), fd);
		ft_putnbr_fd((nb % 10), fd);
	}
	else
	{
		nb += '0';
		write (fd, &nb, 1);
	}
}
/*
int	main()
{
	int	n = -2147483647;
	int fd = 1;
	ft_putnbr_fd(n, fd);
	return (0);
}*/
