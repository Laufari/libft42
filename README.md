Libft

Libft es una biblioteca estándar personalizada en C, diseñada para proporcionar una colección de funciones útiles
Esta biblioteca servirá como una base sólida para futuros proyectos en C.

📌 Características Principales
Reimplementación de Funciones de la libc: Proporciona una serie de funciones comunes reimplementadas con el prefijo ft_ que optimizan la manipulación de datos y la gestión de memoria.
Funciones Adicionales: Se incluyen funciones para el manejo de cadenas, memoria, números y más, diseñadas para complementar las funciones estándar de la biblioteca de C.
Listas Enlazadas (Bonus): Implementación opcional de funciones que permiten la manipulación de listas enlazadas, una estructura de datos fundamental en la programación.
Código de Alta Calidad: Estructurado siguiendo la norma de codificación 42, asegurando la legibilidad, mantenimiento y escalabilidad del proyecto.
Gestión de Memoria Segura: Uso estricto de malloc, free y write para asegurar una correcta gestión de memoria sin filtraciones.
🛠️ Instalación y Uso
Para compilar y crear la biblioteca, ejecuta el siguiente comando en tu terminal:
make

Esto generará el archivo libft.a, que podrás incluir en cualquier proyecto de C con:
#include "libft.h"

Si deseas limpiar archivos temporales y objetos generados durante la compilación:
make clean

Para eliminar completamente los archivos generados, incluyendo la biblioteca estática libft.a:
make fclean

Y para recompilar desde cero:
make re

📖 Funciones Implementadas
📌 Parte 1 - Reimplementación de Funciones de la libc
Libft reimplementa varias de las funciones más usadas en la libc, proporcionando un conjunto robusto de herramientas para la manipulación de cadenas, caracteres, y memoria:

Funciones de caracteres: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint
Funciones de manipulación de cadenas: ft_strlen, ft_strchr, ft_strrchr, ft_strncmp, ft_memchr, ft_strnstr
Funciones de manipulación de memoria: ft_memset, ft_bzero, ft_memcpy, ft_memmove
Funciones de conversión y copia: ft_itoa, ft_strdup, ft_toupper, ft_tolower, ft_strlcpy, ft_strlcat
Funciones de conversión de números: ft_atoi
Funciones de asignación dinámica: ft_calloc

📌 Parte 2 - Funciones Adicionales
Además de las funciones estándar, se añaden utilidades que facilitan la manipulación de cadenas
y la interacción con el sistema:

ft_substr, ft_strjoin, ft_strtrim
ft_split, ft_itoa
ft_strmapi, ft_striteri
ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd
📌 Bonus - Manipulación de Listas Enlazadas
En el caso de completar las funciones de la parte obligatoria,
se puede optar por implementar una serie de funciones opcionales para gestionar listas enlazadas:

ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast
ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap
📌 Ejemplo de Uso de Listas Enlazadas
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
Estas funciones permiten crear y gestionar estructuras dinámicas complejas, como listas, con total control sobre la memoria.

🚀 Normas y Buenas Prácticas
Este proyecto sigue estrictamente las Normas 42, lo que significa que está diseñado para ser mantenible, eficiente y fácil de entender.
Entre las buenas prácticas implementadas se encuentran:

Uso exclusivo de malloc, free y write cuando sea necesario, garantizando una gestión adecuada de la memoria.
No se permiten variables globales: Todas las funciones se mantienen autónomas y sin dependencias globales.
Código estructurado: Las funciones se dividen en archivos según su funcionalidad, 
y se utilizan static para aquellas que no necesitan ser accesibles fuera de su archivo.
Revisión de código: El proyecto es evaluado por pares, promoviendo la calidad del código y el trabajo colaborativo.
🏆 Contribución y Evaluación
Este proyecto es evaluado mediante revisiones de pares y se recomienda seguir las siguientes pautas para maximizar su éxito:

Pruebas: Crea programas de prueba para validar la correcta implementación de cada función.
Herramientas de análisis: Usa herramientas como Valgrind para verificar que no existan filtraciones de memoria.
Documentación: Asegúrate de documentar claramente el código y las decisiones tomadas en el proceso de desarrollo.
📜 Licencia
Este proyecto es parte del currículo de la escuela 42, y sigue sus lineamientos de código abierto.

🎯 Libft es una base sólida para cualquier proyecto en C, ya sea académico o profesional. 
Con esta biblioteca, se puede simplificar el desarrollo de aplicaciones en C mientras se gana experiencia con la gestión de memoria
y la creación de estructuras de datos eficientes.


Laura Farina
