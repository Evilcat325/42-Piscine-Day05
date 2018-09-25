/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 22:08:21 by seli              #+#    #+#             */
/*   Updated: 2018/09/24 23:17:36 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);
int		ft_is_alpha_numeric(char *c);

char	*ft_strcapitalzie(char *str)
{
	char *index;

	str = ft_strlowcase(str);
	if (!str)
		return (str);
	index = str;
	if (ft_is_alpha_numeric(index + 1))
		*index = *index + 'A' - 'a';
	while (*index)
	{
		if ((!ft_is_alpha_numeric(index) && ft_is_alpha_numeric(index + 1)))
			*index = *index + 'A' - 'a';
		index++;
	}
}

int		ft_is_alpha_numeric(char *c)
{
	if (('a' <= *c && *c <= 'z')
		|| 'A' <= *c && *c <= 'Z'
		|| '0' <= *c && *c <= '9')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	char *head;

	head = str;
	while (*head)
	{
		if ('A' <= *head && *head <= 'Z')
			*head -= 'A' - 'a';
		head++;
	}
	return (str);
}
