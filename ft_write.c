/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:10:07 by stde-alm          #+#    #+#             */
/*   Updated: 2022/01/25 13:42:04 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_wrchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_wrstr(char str[])
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str)
	{
		count += ft_wrstr("(null)");
		return (count);
	}
	while (str[i])
	{
		i += ft_wrchar(str[i]);
	}
	return (i);
}
