Libft

Libft es una biblioteca estándar personalizada en C, diseñada para proporcionar una colección de funciones útiles
que extienden y mejoran las capacidades de la biblioteca estándar de C (libc).
Esta biblioteca servirá como una base sólida para futuros proyectos en C.

📌 Características

Implementación de funciones esenciales de la libc.

Funciones adicionales para manipulación de cadenas, memoria y números.

Implementación opcional de listas enlazadas.

Código estructurado y normativo siguiendo los estándares de 42.

Uso exclusivo de malloc, free y write cuando sea necesario.

📂 Archivos y Estructura

libft/
├── ft_*.c           # Implementaciones de funciones
├── libft.h          # Archivo de cabecera con las declaraciones de funciones
├── Makefile         # Archivo de compilación para la biblioteca
└── README.md        # Documentación del proyecto

🛠️ Instalación y Uso

Para compilar la biblioteca, ejecuta:

make

Esto generará el archivo libft.a, que puedes incluir en tus proyectos de C con:

#include "libft.h"

Para recompilar y limpiar archivos temporales:

make clean

Para eliminar los archivos generados, incluyendo libft.a:

make fclean

Para recompilar desde cero:

make re

📖 Funciones Implementadas

📌 Parte 1 - Reimplementación de funciones de la libc

Funciones estándar de C reimplementadas con el prefijo ft_:

ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint

ft_strlen, ft_memset, ft_bzero, ft_memcpy, ft_memmove

ft_strlcpy, ft_strlcat, ft_toupper, ft_tolower

ft_strchr, ft_strrchr, ft_strncmp, ft_memchr, ft_memcmp

ft_strnstr, ft_atoi

ft_calloc, ft_strdup

📌 Parte 2 - Funciones adicionales

Funciones útiles que complementan la funcionalidad de la biblioteca estándar:

ft_substr, ft_strjoin, ft_strtrim

ft_split, ft_itoa

ft_strmapi, ft_striteri

ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

📌 Bonus - Manipulación de listas enlazadas

Si se completa la parte obligatoria, se pueden implementar funciones para la gestión de listas enlazadas usando la estructura:

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

Funciones opcionales para manipular listas:

ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast

ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap

🚀 Reglas y Normas

Código escrito en C siguiendo la Norma 42.

No se permiten variables globales.

Uso de static en funciones auxiliares internas.

Estricta gestión de memoria para evitar leaks.

Uso de ar para crear la librería (libtool está prohibido).

Entrega en un repositorio Git asignado.

🏆 Contribución y Evaluación

Este proyecto es evaluado por pares, y se recomienda:

Crear programas de prueba para validar la funcionalidad.

Usar valgrind o herramientas similares para detectar memory leaks.

Mantener un código limpio y bien documentado.

📜 Licencia

Este proyecto es parte del currículo de la escuela 42 y sigue sus lineamientos de código abierto.

🎯 Libft es tu primer paso para escribir código C eficiente y reutilizable. ¡Aprovéchala al máximo!
