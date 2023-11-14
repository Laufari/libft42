/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:17:03 by laufarin          #+#    #+#             */
/*   Updated: 2023/09/21 19:57:31 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	e;
	char	*dst;


	i = 0;
	e = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
	{
		i++;
	}
	while (e > i && ft_strchr(set, s1[e]))
	{
		e--;
	}
	dst = ft_substr(s1, i, e - i + 1);
	if(dst == NULL)
		return NULL;
	return (dst);
}
/*char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));*/
