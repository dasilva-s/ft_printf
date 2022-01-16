/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 05:25:58 by stde-alm          #+#    #+#             */
/*   Updated: 2022/01/16 06:38:19 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int	addition( int count, ...)
{
	int somme;
	int current;
	va_list num;
	va_start(num, count);

	current = 0;
	somme = 0;
	
	while (count > 0)
	{
		current = (int) va_arg(num, int);
		somme += current;
		count-- ;
	}
	return(somme);
}

int main(void)
{
	int total;
	
	total = addition(5, 20, 15, 10, 5, 6);
	printf("totale = %d \n", total);
	return(0);
}