/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:32:29 by laufarin          #+#    #+#             */
/*   Updated: 2023/09/18 01:50:15 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	i = 0;
	j = 0;

	if (!needle[i])
		return ((char *)haystack);
	while (needle[i] && haystack[j] && i < len)
	{
		if(haystack[j] == needle[0]) //Si es un start
		{
			//Busco si el needle esta completo
			//mientras no me salga the haystack
			//mientras no me dalsgo de needle
			//mientras no me pase del len
			//avanzamos la i (PORQUE LA J NO LA AVANZAMOS EN ESTE WHILE)
			//no avanzamos j, porque j es quien apunta en el while princiaplk y queremos recorrer todas las letras del haystack
			while (haystack[j + i] == needle[i] && haystack[i + j] && \
					needle[i] && i + j < len)
			i++;
			
			//Si cuando salgo del while , i apunta al final de needle
			//, es que estaba needle
			if (!needle[i])
				return ((char *) haystack + j);
		}
		j++;
		i = 0;
	}
	return (0);
}
/*
str1[i]
str2[j]
if (str1[i + 1 == str2[j + 1])
{
	i++;
	j++;
}
else
	i++;*/
/*
int	main(void)
{
	char	*a;
	char	*b;
	char	*ptr;

	a = "El gato estaba en el tejado";
	b = "gato";
	
	ptr = ft_strnstr(a, b, 3);

	printf("%s\n", ptr);
	return (0);
}*/
