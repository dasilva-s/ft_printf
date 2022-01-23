/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:14:20 by stde-alm          #+#    #+#             */
/*   Updated: 2022/01/18 11:29:08 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nbr1 = -42345;
	char car1 = 'D';
	char str1[10] = "deCo 2";
	char *p_car = &car1;
	
	printf("test 1 d = %d, i = %i, u = %u, x = %x, X = %X, p =\n", nbr1, nbr1, nbr1, nbr1, nbr1);
	return(0);
}