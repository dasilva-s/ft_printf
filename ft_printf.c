/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:42:56 by stde-alm          #+#    #+#             */
/*   Updated: 2022/01/23 13:58:49 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
#include"ft_write.c"
#include"ft_writenbr.c"

int	ft_arg(const char format, va_list arg)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_wrchar(va_arg(arg, int));
	else if (format == 's')
		count += ft_wrstr(va_arg(arg, char *));
	else if (format == 'd' || format == 'i')
		count += ft_wrnbr(va_arg(arg, long), 0);
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

int	main(void)
{
	long nb1 = 22;
	long nb2 = -123456789;
	printf("nbr = %d \n", ft_printf("%dhello %s v%c %i\n", nb1, "COMMENT", 'A', nb2));
	printf("nbr = %d \n", ft_printf("hello %s v%c \n", "COMMENT", 'A'));
	return (0);
}
