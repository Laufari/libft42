/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:34:49 by laufarin          #+#    #+#             */
/*   Updated: 2023/09/12 22:16:34 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
DESCRIPTION
     The memcmp() function compares byte string s1 against byte string s2.  Both
     strings are assumed to be n bytes long.

RETURN VALUES
     The memcmp() function returns zero if the two strings are identical, other-
     wise returns the difference between the first two differing bytes (treated
     as unsigned char values, so that `\200' is greater than `\0', for example).
     Zero-length strings are always identical.  This behavior is not required by
     C and portable code should only depend on the sign of the returned value.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char *ptr1;
	unsigned char *ptr2;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	
	i = 0;
	//Recorremos los dos strings
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return(ptr1[i] - ptr2[i]);
		i++;

		//a cada vuelta comparar los dos string ene l caracter que toca
		//Si son distintos 
	}
	return(0);
}
