/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 06:31:13 by stde-alm          #+#    #+#             */
/*   Updated: 2022/01/16 06:34:31 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int	maximum( int first, ...)
{

    int max = first;
    va_list parametersInfos;
    /* Initialize the va_list structure */
    va_start( parametersInfos, first );

    while( true ) {

        /* Extraction of the next integer */
        int current = (int) va_arg( parametersInfos, int );

        if ( current == -1 ) break;

        if ( current > max ) {
            max = current;
        }

    }    

    /* Release va_list resources */
    va_end( parametersInfos );

    return max;
}

int main( int argc, char * argv[] )
{

    int result = maximum( 2, 11, 5, -1 );
    printf( "maximum( 2, 11, 5, -1 ) == %d\n", result );     /* 11 */


    result = maximum( 3, 8, 12, 1, -1 );
    printf( "maximum( 3, 8, 12, 1, -1 ) == %d\n", result );  /* 12 */

    return(0);
}
