/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 19:55:09 by seli              #+#    #+#             */
/*   Updated: 2018/09/25 00:15:29 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_empty_condition(unsigned char *s1, unsigned char *s2, int start);

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char *us1;
	unsigned char *us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;

	if (!*s1 || !*s2)
		return (ft_empty_condition(s1, s2, 1));
	while (*us1 && *us2)
	{
		if (*us1 > *us2)
			return (1);
		else if (*us1 < *us2)
			return (-1);
		us1++;
		us2++;
	}
	return (ft_empty_condition(us1, us2, 0));
}

int	ft_empty_condition(unsigned char *s1, unsigned char *s2, int start)
{
	if (!*s1 && !*s2)
		return (0);
	else if (start)
		return (!*s1 ? -*s2 : *s1);
	else
		return (!*s1 ? -1 : 1);
}
