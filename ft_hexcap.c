/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexcap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:09:00 by mohkhan           #+#    #+#             */
/*   Updated: 2024/07/10 15:37:36 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexcap(unsigned int n)
{
	int		length;
	char	*str;
	int		count;

	count = 0;
	length = 0;
	str = "0123456789ABCDEF";
	if (n >= 16)
	{
		length += ft_hexcap(n / 16);
		count = ft_hexcap(n / 16);
		if (count == -1)
			return (-1);
	}
	length += ft_putchar(str[n % 16]);
	count = ft_putchar(str[n % 16]);
	if (count == -1)
		return (-1);
	return (length);
}
