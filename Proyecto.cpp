#include <iostream>
// Inicio de la función principal del programa
int main()
{
    // Declaración de variables
    int n = 0;      // Variable para almacenar el número a calcular el factorial
    int menu = 0;   // Variable para almacenar la opción del menú seleccionada por el usuario
    char caracter;  // Variable para almacenar el carácter leído de la entrada del usuario
    int inmenu = 0; // Variable para controlar el estado del menú
    char input[10]; // Array para almacenar la entrada del usuario

    // Bucle infinito para mantener el menú en la pantalla hasta que el usuario elija la opción de salir
    while (1)
    {
        // Se muestra el menú de operaciones básicas
        switch (inmenu)
        {
        case 0:

            printf("\nMenu de Operaciones Basicas.\n");
            printf("1 - Calcular Factorial.\n");
            printf("2 - Calcular suma.\n");
            printf("3 - Calcular6 resta.\n");
            printf("4 - Calcular Multiplicacion.\n");
            printf("5 - Calcular Division.\n");
            printf("6 - Salir del Programa.\n");
        }
        // Se solicita al usuario que elija una opción del menú
        printf("\nElije del 1 al 6: ");
        fgets(input, sizeof(input), stdin);
        // Se verifica que la entrada del usuario sea válida
        if (sscanf(input, "%d%c", &menu, &caracter) != 2 || caracter != '\n')
        {
            printf("\nError, sigue las instrucciones.\n");
        }
        else if (menu == 0)
        {
            printf("\nError, sigue las instrucciones.\n");
        }
        else if (menu < 0.0)
        {
            printf("\nError, sigue las instrucciones.\n");
        }
        else if (menu > 6)
        {
            printf("\nError, sigue las instrucciones.");
        }

        // Se ejecuta la operación seleccionada por el usuario
        switch (menu)
        {
        case 1:
        {
            // Código para calcular el factorial de un número
            printf("\nIngrese un numero para calcular su factorial: ");
            if (scanf("%d%c", &n, &caracter) != 2 || caracter != '\n')
            {
                printf("\nError!! Ingresa numeros enteros. \n");
                while (getchar() != '\n')
                    ;
            }
            else if (n < 0)
            {
                printf("\nError!! Ingresa numeros positivos. \n");
            }
            else
            {
                unsigned long long f;
                f = 1; // Inicializa f a 1 antes de calcular el factorial
                for (int i = 1; i <= n; i++)
                    f *= i;
                printf("El factorial es: %llu\n", f);
            }

            printf("\nIngresa cualquier tecla para regresar al menu: ");
            if (scanf("%d%c", &inmenu, &caracter) != 2 || caracter != '\n')
            {
                printf("\nValido!! \n");
                while (getchar() != '\n')
                    ;
            }
            break;
        }
        case 2:
        {
            // Código para calcular la suma de números
            int sumaTotal = 0;
            int numeroActual = 0;
            bool continuar = true;
            int valorSalida = -1;
            do
            {
                printf("\n(ingrese %d para salir) o Ingrese un numero para sumar: ", valorSalida);
                if (scanf("%d%c", &numeroActual, &caracter) != 2 || caracter != '\n')
                {
                    printf("\nError!! Ingrese numeros. \n");
                    while (getchar() != '\n')
                        ;
                }
                else
                {
                    if (numeroActual == valorSalida)
                    {
                        continuar = false;
                    }
                    else
                    {
                        sumaTotal += numeroActual;
                    }
                }

            } while (continuar);

            printf("La suma es: %d\n", sumaTotal);
            printf("\nIngresa cualquier tecla para regresar al menu: ");
            if (scanf("%d%c", &inmenu, &caracter) != 2 || caracter != '\n')
            {
                printf("\nValido!! \n");
                while (getchar() != '\n')
                    ;
            }
            break;
        }
        case 3:
        {
            // Código para calcular la resta de números
            int restaTotal = 0;
            int numeroActual = 0;
            bool continuar = true;
            int valorSalida = -1; // Valor para salir del bucle
            do
            {
                printf("\n(ingrese %d para salir) o Ingrese un numero para restar: ", valorSalida);
                if (scanf("%d%c", &numeroActual, &caracter) != 2 || caracter != '\n')
                {
                    printf("\nError!! Ingrese numeros. \n");
                    while (getchar() != '\n')
                        ;
                }
                else
                {
                    if (numeroActual == valorSalida)
                    {
                        continuar = false;
                    }
                    else
                    {
                        restaTotal = numeroActual - restaTotal;
                    }
                }
            } while (continuar);

            printf("La resta es: %d\n", restaTotal);
            printf("\nIngresa cualquier tecla para regresar al menu: ");
            if (scanf("%d%c", &inmenu, &caracter) != 2 || caracter != '\n')
            {
                printf("\nValido!!\n");
                while (getchar() != '\n')
                    ;
            }
            break;
        }
        case 4:
        {
            // Código para calcular la multiplicación de números
            printf("Multiplicacion\n");
            int productoTotal = 1;
            int numeroActual = 1;
            bool continuar = true;
            int valorSalida = -1; // Valor para salir del bucle
            do
            {
                printf("\n(ingrese %d para salir) o Ingrese un numero para multiplicar: ", valorSalida);
                if (scanf("%d%c", &numeroActual, &caracter) != 2 || caracter != '\n')
                {
                    printf("\nError!! Ingrese numeros. \n");
                    while (getchar() != '\n')
                        ;
                }
                else
                {
                    if (numeroActual == valorSalida)
                    {
                        continuar = false;
                    }
                    else
                    {
                        productoTotal *= numeroActual;
                    }
                }

            } while (continuar);
            printf("La suma es: %d\n", productoTotal);
            printf("\nIngresa cualquier tecla para regresar al menu: ");
            if (scanf("%d%c", &inmenu, &caracter) != 2 || caracter != '\n')
            {
                printf("\nValido!! \n");
                while (getchar() != '\n')
                    ;
            }
            break;
        }
        case 5:
        {
            // Código para calcular la división de números
            printf("\nDivision.");
            double a, b; // Declaramos a y b de nuevo
            while (1)
            {
                printf("\nIngrese el primer numero de la division: ");
                if (scanf("%lf%c", &a, &caracter) != 2 || caracter != '\n')
                {
                    printf("\nError!! Ingresa numeros. \n");
                    while (getchar() != '\n')
                        ;
                }
                else
                {
                    printf("\nIngrese el segundo numero de la division: ");
                    scanf("%lf", &b);

                    double d = a / b;
                    printf("La division es: %.1lf\n", d);
                }
                break;
            }
            printf("\nIngresa cualquier tecla para regresar al menu: ");
            if (scanf("%d%c", &inmenu, &caracter) != 2 || caracter != '\n')
            {
                printf("\nValido!! \n");
                while (getchar() != '\n')
                    ;
            }
            break;
        }
        case 6:
            // Salir del programa
            return 0;
        default:
            break;
        }
    }
}
