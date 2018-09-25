/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 19:25:28 by seli              #+#    #+#             */
/*   Updated: 2018/09/24 23:54:47 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_samestr(char *sub, char *src);

char	*ft_strstr(char *str, char *to_find)
{
	if (!to_find || !str || !*to_find || !*str)
		return (str);
	while (*to_find)
	{
		if (ft_is_samestr(str, to_find))
			return (to_find);
		to_find++;
	}
	return ((void *)0);
}

int		ft_is_samestr(char *sub, char *src)
{
	while (*sub)
	{
		if (*sub != *src)
			return (0);
		sub++;
	}
	return (1);
}
