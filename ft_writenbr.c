/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writenbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:53:43 by stde-alm          #+#    #+#             */
/*   Updated: 2022/01/23 14:00:59 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_wrnbr(long nb, int count)
{
	int	neg;

	neg = 0;
	if (nb < 0)
	{
		neg += ft_wrchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
		count += ft_wrnbr(nb / 10, count);
	count += ft_wrchar((nb % 10) + '0');
	if (neg > 0)
		return (count + 1);
	return (count);
}
