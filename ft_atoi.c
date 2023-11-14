/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:45:51 by laufarin          #+#    #+#             */
/*   Updated: 2023/09/22 18:30:47 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   a -> 0
   1a -> 1
   1 -> 1
   -66a6 -> -66
   --3 -> 0
   -  5 -> 0
   */


//1 - Resultado empieza en 0
//2 - Me como los espacios iniciales
//3 - Capturo signo si lo hay
//4 - Bucle magico, mientras caracter entre 0 i 9, linea magica
//5 - Devuelvo resultado * signo (signo era 1 si positivo, -1 si negativo)
int	ft_atoi(const char *str)
{
	int	resultado;
	int	i;
	int sign;

	sign = 1;
	i = 0;
	resultado = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	//	printf("Despues de comerse los espacios\n");
	//	printf("%s\n", &str[i]);
	if (str[i] == '-')
	{
		i++;
		sign = -1;
	}
	else if (str[i] == '+')
	{
		i++;
		sign = +1;
	}
	//	printf("Despues del cojer signo\n");
	//	printf("%d\n", sign);


	//Estoy aqui y lo que tengo es '-' y deberia ser '1'
	//	printf("Antres de entra el caracter es |%c|\n", str[i]);
	while (str[i] >= '0' && str[i] <= '9')
	{
		//		printf("dentro del while con el caracter: |%c|\n", str[i]);
		resultado = resultado * 10 + (str[i] - '0');
		i++;
		//int j;
		//j = 0;
		//while(j < 10000000)
		//	j++;
	}
	//	printf("Fuera del while\n");
	return (resultado * sign);
}
/*
   int main()
   {
   printf("|%d|\n", ft_atoi("    110"));
   }*/









