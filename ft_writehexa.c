/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writehexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:26:50 by stde-alm          #+#    #+#             */
/*   Updated: 2022/01/31 00:03:13 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int ft_wrhexa(unsigned long nb, char r)
{
	int		count;
	char	*ref;

	count = 0;
	ref = "01";
//	if(nb < 0)
//		nb = nb * -1;
	if (r == 'x')
		ref = "0123456789abcdefg";
	else if (r == 'X')
		ref = "0123456789ABCDEFG";
	if(nb >= 16)
		count += ft_wrhexa(nb / 16, r);
	count += ft_wrchar(ref[nb % 16]);
	
	return(count);
}
/*
int main(void)
{
	ft_wrhexa(158, 'X');
	return(0);
}*/