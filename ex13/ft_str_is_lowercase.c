/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 23:15:26 by seli              #+#    #+#             */
/*   Updated: 2018/09/24 23:58:37 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase(char *c);

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!ft_char_is_lowercase(str))
			return (0);
		str++;
	}
	return (1);
}

int	ft_char_is_lowercase(char *c)
{
	if ('a' <= *c && *c <= 'z')
		return (1);
	return (0);
}
