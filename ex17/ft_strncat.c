/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 23:47:56 by seli              #+#    #+#             */
/*   Updated: 2018/09/25 00:51:45 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char *head;

	head = dest;
	while (*head)
		head++;
	while (*src && nb > 0)
	{
		*head++ = *src++;
		nb--;
	}
	*head = 0;
	return (dest);
}
