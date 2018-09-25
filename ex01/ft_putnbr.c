/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 13:36:44 by seli              #+#    #+#             */
/*   Updated: 2018/09/24 15:30:23 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int	divisor;
	int	c;

	if (nb < 0)
		ft_putchar('-');
	divisor = 1000000000;
	while (nb / divisor == 0 && divisor != 1)
	{
		divisor /= 10;
	}
	while (divisor != 1)
	{
		c = (nb / divisor) % 10;
		if (c < 0)
			c = -c;
		ft_putchar(c + '0');
		divisor /= 10;
	}
	c = nb % 10;
	if (c < 0)
		c = -c;
	ft_putchar(c + '0');
}
