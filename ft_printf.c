/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:42:56 by stde-alm          #+#    #+#             */
/*   Updated: 2022/01/25 14:09:08 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_arg(const char format, va_list arg)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_wrchar(va_arg(arg, int));
	else if (format == 's')
		count += ft_wrstr(va_arg(arg, char *));
	else if (format == 'd' || format == 'i')
		count += ft_wrnbr(va_arg(arg, int), 0);
	else if (format == 'u')
		count += ft_wrnbr(va_arg(arg, unsigned int), 0);
	else if (format == 'x' || format == 'X')
		count += ft_wrhexa(va_arg(arg, unsigned int), format);
	else if (format == 'p')
		count += ft_wradd(va_arg(arg, unsigned long));
	else if (format == '%')
		count += ft_wrchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		count;

	va_start(arg, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_arg(str[i], arg);
		}
		else
		{
			write(1, &str[i], 1);
			count++;
		}
		i++;
	}
	va_end(arg);
	return (count);
}
