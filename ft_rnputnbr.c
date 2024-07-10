/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rnputnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:10:18 by mohkhan           #+#    #+#             */
/*   Updated: 2024/07/10 15:51:16 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_rnputnbr(int n)
{
	int	length;
	int	count;

	count = 0;
	length = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		length = ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		length += ft_rnputnbr(n / 10);
		count = ft_rnputnbr(n / 10);
		if (count == -1)
			return (-1);
	}
	length += ft_putchar((n % 10) + '0');
	count = ft_putchar((n % 10) + '0');
	if (count == -1)
		return (-1);
	return (length);
}
