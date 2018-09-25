/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 23:18:00 by seli              #+#    #+#             */
/*   Updated: 2018/09/24 23:19:16 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase(char *c);

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!ft_char_is_uppercase(*str))
			return (0);
		str++;
	}
	return (1);
}

int	ft_char_is_uppercase(char *c)
{
	if ('A' <= *c && *c <= 'Z')
		return (1);
	return (0);
}
