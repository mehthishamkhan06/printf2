/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:10:32 by mohkhan           #+#    #+#             */
/*   Updated: 2024/07/10 15:51:26 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsignint(unsigned int n)
{
	int	length;
	int	count;

	count = 0;
	length = 0;
	if (n >= 10)
	{
		length += ft_unsignint(n / 10);
		count = ft_unsignint(n / 10);
		if (count == -1)
			return (-1);
	}
	length += ft_putchar((n % 10) + 48);
	count = ft_putchar((n % 10 + 48));
	if (count == -1)
		return (-1);
	return (length);
}
