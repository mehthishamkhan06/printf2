/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:08:46 by mohkhan           #+#    #+#             */
/*   Updated: 2024/07/10 17:59:06 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadec(unsigned long n)
{
	int		length;
	char	*str;
	int		count;

	count = 0;
	str = "0123456789abcdef";
	length = 0;
	if (n > 15)
	{
		length += ft_hexadec(n / 16);
		count = ft_hexadec(n / 16);
		if (count == -1)
			return (-1);
	}
	length += ft_putchar(str[n % 16]);
	count = ft_putchar(str[n % 16]);
	if (count == -1)
		return (-1);
	return (length);
}

int	ft_hexaddr(unsigned long n)
{
	int	length;
	int	count;

	count = 0;
	length = ft_putstr("0x");
	if (n == 0)
		return (ft_putchar('0'));
	else
	{
		length += ft_hexadec(n);
		count = ft_hexadec(n);
		if (count == -1)
			return (-1);
	}
	return (length);
}
