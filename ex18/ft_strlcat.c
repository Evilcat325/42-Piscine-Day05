/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 00:45:47 by seli              #+#    #+#             */
/*   Updated: 2018/09/25 20:00:59 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*head;
	int				max;
	unsigned int	dstlen;
	unsigned int	srclen;

	srclen = 0;
	dstlen = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dest);
	head = dest + dstlen;
	max = size - dstlen - 1;
	if (max < 0)
		return (size + srclen);
	while (*src && max > 0)
	{
		*head++ = *src++;
		max--;
	}
	if (!(size == 0 || dstlen > size))
		*head = 0;
	return (dstlen + srclen);
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
