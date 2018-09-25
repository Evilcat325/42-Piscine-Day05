/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 19:55:09 by seli              #+#    #+#             */
/*   Updated: 2018/09/24 23:57:33 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_empty_condition(unsigned char *s1, unsigned char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char *us1;
	unsigned char *us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	if (!*us1 || !*us2)
		return (ft_empty_condition(us1, us2));
	while (*us1 && *us2)
	{
		if (*us1 > *us2)
			return (1);
		else if (*us1 < *us2)
			return (-1);
		us1++;
		us2++;
	}
	return (ft_empty_condition(us1, us2));
}

int	ft_empty_condition(unsigned char *s1, unsigned char *s2)
{
	if (!*s1 && !*s2)
		return (0);
	if (!*s1 || !*s2)
		return (!*s1 ? -1 : 1);
	return (0);
}
