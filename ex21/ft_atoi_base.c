/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 16:42:59 by seli              #+#    #+#             */
/*   Updated: 2018/09/25 17:08:15 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar_base(int nbr, int base_size);
int		ft_base_check(char *str, char *base);
int		ft_atoi(char *str);
int		ft_isspace(char *str);

int		ft_atoi_base(char *str, char *base)
{
	int		result;
	int		base_size;
	char	*head;

	head = base;
	while (*head++)
	{
		if (*head == '+' || *head == '-')
			return (0);
	}
	base_size = ft_base_check(str, base);
	if (base_size <= 1)
		return (0);
	result = ft_atoi(str);
	result = ft_putchar_base(result, base_size);
	return (result);
}

int		ft_atoi(char *str)
{
	long	result;
	long	prev_result;
	int		sign;

	sign = 1;
	result = 0;
	while (ft_isspace(str))
		str++;
	if (*str == '+' || *str == '-')
		sign = *str++ == '-' ? -1 : 1;
	while ('0' <= *str && *str <= '9')
	{
		prev_result = result;
		result = result * 10 + (*str - '0') * sign;
		if (result / 10 != prev_result)
			return (sign == 1 ? -1 : 0);
		str++;
	}
	return ((int)result);
}

int		ft_isspace(char *str)
{
	int result;

	result = 0;
	if (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		result = 1;
	return (result);
}

int		ft_putnbr_base(int nbr, int base_size)
{
	long	n;
	long	divisor;
	long	result;
	int		sign;

	n = (long)nbr;
	divisor = base_size;
	n = n < 0 ? -n : n;
	sign = n < 0 ? -1 : 1;
	while (divisor <= n)
		divisor *= base_size;
	while (divisor != base_size)
	{
		divisor /= base_size;
		result = result * 10 + ((n / divisor) % base_size) * sign;
	}
	result = result * 10 + n % base_size;
	return (result);
}

int		ft_base_size(char *str, char *base)
{
	int		len;
	int		not_in_base;
	char	*head;

	len = 0;
	while (*str)
	{
		head = base;
		not_in_base = 0;
		while (*head)
			not_in_base = *head++ == *str ? 1 : not_in_base;
		if (not_in_base && *str != '+' && *str != '-')
			return (0);
		head = str;
		while (*++head)
		{
			if (*head == *str)
				return (0);
		}
		len++;
		str++;
	}
	return (len);
}
