/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writeadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:09:08 by stde-alm          #+#    #+#             */
/*   Updated: 2022/01/31 00:19:24 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_wradd(unsigned long add)
{
	int	count;

	count = 0;
	count += ft_wrstr("0x");
	count += ft_wrhexa(add, 'x');
	return (count);
}
