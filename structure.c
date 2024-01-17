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
    struct alumno estudiante[10];
    // Se declara cuantos alumnos ingresaran al programa

    int a;
    // Definimos la variable a para las opciones del menu

    do
    {
        printf("Ingrese la opcion \n");
        printf("1 para el ingreso de estudiantes \n");
        printf("2 para mostrar los datos de los estudiantes \n");
        printf("3 para salir \n");
        scanf("%d", &a);
        fflush(stdin);
        // Limpia el buffer de entrada

        switch (a)
        {
        case 1:

            printf("-Bienvenido a la recoleccion de datos- \n");
            printf("Ingrese la matricula: ");
            scanf("%d", &estudiante[i].matricula);
            fflush(stdin);
            // Ingreso de matriculas

            printf("Ingrese el nombre del estudiante: ");
            gets(estudiante[i].nombre);
            // Ingreso del nombre del alumno

            printf("Ingrese la direccion del estudiante: ");
            gets(estudiante[i].direccion);
            // Ingreso de la direccion del alumno

            printf("Ingrese la carrera del estudiante: ");
            gets(estudiante[i].carrera);
            // Ingreso de la carrera del alumno

            printf("Ingrese el promedio del estudiante: ");
            scanf("%f", &estudiante[i].promedio);
            fflush(stdin);
            // Ingreso del promedio del alumno

            i = i + i;
            // Se incrementa el numero de estudiante

            break;

        case 2:
            printf("-Bienvenido al mostrador de datos de los estudiantes- \n");
            for (int j = 0; j < i; j++)
            {
                printf("\nEstudiante %d:\n", j + 1);                 
                printf("Matricula: %d\n", estudiantes[j].matricula); 
                printf("Nombre: ");                                  
                puts(estudiantes[j].nombre);
                printf("Direccion: "); 
                puts(estudiantes[j].direccion);
                printf("Carrera: "); 
                puts(estudiantes[j].carrera);
                printf("Promedio: %.2f\n", estudiantes[j].promedio); 
            }
            //Bucle para que lea a todos los estudiantes que ingresa

            break;

        case 3:
            printf("-Gracias por usar el programa- \n");
            break;

        default:
            printf("Numero invalido, ingrese de nuevo \n");
            break;
        }
    } while (a != 3);
    // Se crea el menu con la combinacion de un dowhile y un switch

    return 0;
}
