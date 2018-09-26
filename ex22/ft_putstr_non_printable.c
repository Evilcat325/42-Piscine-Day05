/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 19:13:53 by seli              #+#    #+#             */
/*   Updated: 2018/09/25 19:31:21 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_hex(char c);
void	ft_putchar(char c);
int		ft_char_is_printable(char c);

void	ft_putstr_non_printable(char *str)
{
	if (!str)
		return ;
	while (*str)
	{
		if (ft_char_is_printable(*str))
			ft_putchar(*str);
		else
			ft_print_hex(*str);
		str++;
	}
}

void	ft_print_hex(char c)
{
	char f;
	char s;

	ft_putchar('\\');
	f = (unsigned char)c / 16;
	s = (unsigned char)c % 16;
	f = f < 10 ? f + '0' : f % 10 + 'a';
	s = s < 10 ? s + '0' : s % 10 + 'a';
	ft_putchar(f);
	ft_putchar(s);
}

int		ft_char_is_printable(char c)
{
	if (' ' <= c && c <= '~')
		return (1);
	return (0);
}
