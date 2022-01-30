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
#include"../ft_writehexa.c"
#include"../ft_writeadd.c"

int	main(void)
{
	long nb1 = 22;
	long nb2 = -123456789;
	long add = 0;
	long *lnb1 = &nb1;
	long *lnb2 = &nb2;
/*	//printf("nbr = %d \n", ft_printf("%dhello %s v%c %i\n", nb1, "COMMENT", 'A', nb2));
	//printf("nbr = %d \n", ft_printf("hello %s v%c \n", "COMMENT", 'A'));
	//printf("nbr = %d \n",ft_printf(" NULL %s NULL ", NULL));
	//printf("nbr = %d \n",printf(" NULL %s NULL ", NULL));

	printf(" nbr = %d \n",ft_printf(" %x %X", -158, 42042));
	printf(" nbr = %d \n",printf(" %x %X", -158, 42042));
*/
	printf(" nbr = %d \n",ft_printf(" %p %p", 0, 0));
	printf(" nbr = %d \n",printf(" %p %p", 0, 0));
	printf(" %p %p", 0, 0);

	//ft_wrnbr( -1, 0);

/*	printf(" %d", ft_wrhexa(158, 'X'));
	printf("\n %X\n", 158);*/
	
//	add = ft_wrnbr(nb1, 0);
//	add = ft_wradd((unsigned long) lnb1);

//	-ffreestanding ou -fno-builtin
	return (0);
}

