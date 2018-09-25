/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 23:13:58 by seli              #+#    #+#             */
/*   Updated: 2018/09/24 23:18:57 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_numeric(char *c);

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!ft_char_is_numeric(*str))
			return (0);
		str++;
	}
	return (1);
}

int	ft_char_is_numeric(char *c)
{
	if ('0' <= *c && *c <= '9')
		return (1);
	return (0);
}
