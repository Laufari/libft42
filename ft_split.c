/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:09:22 by laufarin          #+#    #+#             */
/*   Updated: 2023/09/24 20:58:46 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


//tengo	 que deveolver el numero de palabras que cortare
// dado sep = ' '
// s = "hola             que tal" -> 3
// s = " hola que tal" -> 3
// s = "hola que tal " -> 3
// s = "            " -> 0
// s = "" -> 0
//
static int contar_palabras(const char *s, char  c)
{
	int	count;
	int i;

	count = 0;
	i = 0;
	while (s[i])
	{
		//"un final de palabra es una letra que le sigue un separador"
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;	
	}
	/*printf("El numero de palabras es: %d\n", count);*/
	return (count);
}

char **ft_split(char const *s, char c)
{
	char **matrix;
	int i;
	int j;
	//PASO 1:
	//contar palabras, a partir de s, i del separador que me dan
	//cuantas palabras hay??????
	int num_words;
	num_words = contar_palabras(s, c);

	//PASO2
	// Montar la base de la matrix
	// Tengo que reservarme un array de (char *) del tamano de num de palabras + 1
	// Porque el ultimo puntero lo pondremos en NULL para cerrar el array
	matrix = malloc(sizeof (char *) * (num_words + 1));
	if (matrix == NULL)
		return (NULL);

	//PASO3
	//Reccorremos s, y cada vex que encontramos una palabra hago substr de esa
	//palabra y el resultado lo gardi en matrix[j]

	i = 0;
	j = 0;
	int start;
	start = 0;
	while(s[i])
	{
		//Necesito saber donde empieza y donde termina
	    if(i == 0 && s[i] != c)
		{
		//	printf("En posicion 0 hay un start\n");
			start = i;
		}
		if(i > 0 && s[i] != c &&  s[i - 1] == c)
		{
		//	printf("En posicion %d empieza una palabra\n", i);
			start = i;
		}
		//termina una palabra cuando la letra no es un separador y  va seguido de espacio o '\0'
		if(s[i] != c  && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			//printf("En posocion %d termina una palabra\n", i);
			//PUES CUANDO TENGA EL FINAL!!!!
			matrix[j] = ft_substr(s, start, i - start + 1); //LA i es el END de la palbra!!!!
			j++;
		}
		
		//sabemos que en algun momento iremos haciendo algo como
		//matrix[j] = ft_subtr(...)
		//j++
		i++;
	}

	//PASO4
	//Cerrar el array de puntero en la ultima posicion
	matrix[j] = NULL;	
	return matrix;
}

/*int main()
{
	char **splitted;
	splitted = ft_split("hola    que tal", ' ');
	int i;
	i = 0;
	while(splitted[i])
	{
		printf("%s\n", splitted[i]);
		i++;
	}
	return 0;
}*/
