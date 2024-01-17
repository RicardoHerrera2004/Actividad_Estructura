#include <stdio.h>
#include <stdlib.h>
// Se incluyen las bibliotecas

struct alumno
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char carrera[50];
    float promedio;
};
// Se crea la estructura para alumno en general

int main()
{

    int a;
    // Definimos la variable a para las opciones del menu

    do
    {
        printf("Ingrese la opcion \n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            printf("-Bienvenido a la recoleccion de datos- \n");
            break;

        case 2:
            printf("-Bienvenido al mostrador de datos- \n");
            break;

        case 3:
            printf("-Gracias por usar el programa- \n");
            break;

        default:
            printf("Numero invalido, ingrese de nuevo \n");
            break;
        }
    } while (a != 3);

    return 0;
}
