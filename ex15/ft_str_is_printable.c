/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 23:19:41 by seli              #+#    #+#             */
/*   Updated: 2018/09/24 23:33:36 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_printable(char *c);

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!ft_char_is_printable(*str))
			return (0);
		str++;
	}
	return (1);
}

int	ft_char_is_printable(char *c)
{
	if (' ' <= *c && *c <= '~')
		return (1);
	return (0);
}
