/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:28:05 by laufarin          #+#    #+#             */
/*   Updated: 2023/09/04 21:42:08 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	int is_alpha;
	int c;
	
	c = 298;
	is_alpha = ft_isalpha(c);
	if(is_alpha == 0)
	{
		printf("La letra %c no es alpha\n", c);
	}
	else
	{
		printf("La letra %c SI es alpha\n", c);
	}
	return (0);
}*/
