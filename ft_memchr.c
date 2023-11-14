/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:24:46 by laufarin          #+#    #+#             */
/*   Updated: 2023/09/12 19:55:09 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*DESCRIPTION
     The memchr() function locates the first occurrence of c (converted to an
     unsigned char) in string s.

RETURN VALUES
     The memchr() function returns a pointer to the byte located, or NULL if no
     such byte exists within n bytes.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t	i;
    ptr = (unsigned char *)s;
	i = 0;
	//VAmos a buscar el caracter c em ptr
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return NULL;
}

