/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 01:15:26 by seli              #+#    #+#             */
/*   Updated: 2018/09/25 13:38:50 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	dstlen;
	unsigned int	srclen;

	dstlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size == 0)
		return (dstlen);
	while (size > 1 && *src)
	{
		*dest++ = *src++;
		size--;
	}
	*dest = '\0';
	return (srclen);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
