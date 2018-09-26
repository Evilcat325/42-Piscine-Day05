/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 16:42:59 by seli              #+#    #+#             */
/*   Updated: 2018/09/25 17:40:17 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_base_size(char *base);
int		ft_atoi(char *str, char *base, int base_size);
int		ft_in_base(char *str, char *base);

int		ft_atoi_base(char *str, char *base)
{
	int		result;
	int		base_size;

	base_size = ft_base_size(base);
	if (base_size <= 1 || !str)
		return (0);
	result = ft_atoi(str, base, base_size);
	return (result);
}

int		ft_atoi(char *str, char *base, int base_size)
{
	long	result;
	long	prev_result;
	int		sign;

	sign = 1;
	result = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		sign = *str++ == '-' ? -1 : 1;
	while (ft_in_base(str, base) >= 0)
	{
		prev_result = result;
		result = result * base_size + ft_in_base(str, base);
		if (result / base_size != prev_result)
			return (sign == 1 ? -1 : 0);
		str++;
	}
	return ((int)result);
}

int		ft_in_base(char *str, char *base)
{
	int	n;

	n = 0;
	while (*base)
	{
		if (*str == *base++)
			return (n);
		n++;
	}
	return (-1);
}

int		ft_base_size(char *base)
{
	int		base_size;
	char	*head;

	if (!base)
		return (0);
	base_size = 0;
	while (*base)
	{
		head = base;
		while (*++head)
		{
			if (*head == *base)
				return (0);
		}
		if (*head == '+' || *head == '-')
			return (0);
		base_size++;
		base++;
	}
	return (base_size);
}
