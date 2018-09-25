/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 16:13:09 by seli              #+#    #+#             */
/*   Updated: 2018/09/24 17:50:01 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char *str);

int	ft_atoi(char *str)
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

int	ft_isspace(char *str)
{
	int result;

	result = 0;
	if (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		result = 1;
	return (result);
}
