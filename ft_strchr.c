/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:50:32 by laufarin          #+#    #+#             */
/*   Updated: 2023/09/12 19:02:59 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
     DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  The terminating null character is
     considered to be part of the string; therefore if c is `\0', the func-
     tions locate the terminating `\0'.

	 RETURN VALUES
	 The functions strchr() and strrchr() return a pointer to the located
     character, or NULL if the character does not appear in the string.
 */
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	c = (unsigned char) c;

	if(c == '\0')
		return (char *)&s[ft_strlen(s)];
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*a;
	int			b;

	a = "hola";
	b = 108;
	ft_strchr(a, b);

	printf("%s\n", ft_strchr(a, b));
	return (0);
}
*/
