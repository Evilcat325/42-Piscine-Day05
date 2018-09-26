/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 20:24:31 by seli              #+#    #+#             */
/*   Updated: 2018/09/25 23:06:29 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_addres(unsigned long total);
void	ft_print_charhex(unsigned char *stri, int max);
void	ft_print_str(unsigned char *str, int max);

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long	total;
	unsigned char	*head;

	total = 0;
	head = addr;
	while (total < size)
	{
		ft_print_addres(total / 16);
		ft_print_charhex(head, (int)(size - total));
		ft_print_str(head, (int)(size - total));
		ft_putchar('\n');
		head += 16;
		total += 16;
	}
	return (addr);
}

void	ft_print_str(unsigned char *head, int max)
{
	int		i;

	i = 0;
	while (i < 16 && max > 0)
	{
		if (' ' <= *head && *head <= '~')
			ft_putchar(*head);
		else if (*head || *head == '\0')
			ft_putchar('.');
		else
			head--;
		head++;
		i++;
		max--;
	}
}

void	ft_print_charhex(unsigned char *head, int max)
{
	int		i;
	char	c;

	i = 0;
	while (i < 16)
	{
		if (max-- <= 0)
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		else
		{
			c = *head / 16;
			c = c < 10 ? c + '0' : c % 10 + 'a';
			ft_putchar(c);
			c = *head % 16;
			c = c < 10 ? c + '0' : c % 10 + 'a';
			ft_putchar(c);
		}
		if (i % 2 == 1)
			ft_putchar(' ');
		head++;
		i++;
	}
}

void	ft_print_addres(unsigned long total)
{
	unsigned long	divisor;
	char			c;

	divisor = 16 * 16 * 16 * 16 * 16 * 16;
	while (divisor != 1)
	{
		c = (total / divisor) % 16;
		c = c < 10 ? c + '0' : c % 10 + 'a';
		ft_putchar(c);
		divisor /= 16;
	}
	c = total % 16;
	c = c < 10 ? c + '0' : c % 10 + 'a';
	ft_putchar(c);
	ft_putchar('0');
	ft_putchar(':');
	ft_putchar(' ');
}
