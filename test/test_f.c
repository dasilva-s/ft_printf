/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:18:26 by stde-alm          #+#    #+#             */
/*   Updated: 2022/01/25 14:10:06 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../ft_printf.h"
#include"../ft_printf.c"
#include"../ft_write.c"
#include"../ft_writenbr.c"

int	main(void)
{
	long nb1 = 22;
	long nb2 = -123456789;
	//printf("nbr = %d \n", ft_printf("%dhello %s v%c %i\n", nb1, "COMMENT", 'A', nb2));
	//printf("nbr = %d \n", ft_printf("hello %s v%c \n", "COMMENT", 'A'));
	//printf("nbr = %d \n",ft_printf(" NULL %s NULL ", NULL));
	//printf("nbr = %d \n",printf(" NULL %s NULL ", NULL));

	printf("nbr = %d \n",ft_printf(" %d %% ", -1));
	printf("nbr = %d \n",printf(" %d %% ", -1));
	//ft_wrnbr( -1, 0);
	
	return (0);
}

