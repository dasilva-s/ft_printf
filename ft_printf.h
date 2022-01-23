/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:41:17 by stde-alm          #+#    #+#             */
/*   Updated: 2022/01/23 13:22:53 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<stdio.h>
# include<unistd.h>
# include<stdlib.h>
# include<stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_wrstr(char str[]);
int ft_wrchar(char c);
int ft_wrnbr(long nb, int count);
#endif