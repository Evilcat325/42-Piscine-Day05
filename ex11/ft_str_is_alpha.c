/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 23:11:15 by seli              #+#    #+#             */
/*   Updated: 2018/09/24 23:18:58 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha(char *c);

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!ft_char_is_alpha(*str))
			return (0);
		str++;
	}
	return (1);
}

int	ft_char_is_alpha(char *c)
{
	if (('a' <= *c && *c <= 'z')
		|| 'A' <= *c && *c <= 'Z')
		return (1);
	return (0);
}
