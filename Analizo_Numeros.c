
/*
	Con dos valores ingresados por parámetros, analizo cuál es el mayor.
	En caso de que ambos sean par devuelvo un 0, en caso contrario devuelvo un -1. 

	>>> TERMINADO <<<
*/

#include <stdio.h>

int analizo_numeros (int num1, int num2);

int main()
{
	int num1, num2, resultado;
	printf("Bienvenido a mi programa...\n");
	printf("Ingresados 2 numeros enteros, indicare el mayor,\n");
	printf("Si ambos numero son par imprimire un 0,\n");
	printf("si no, imprimire un -1\n");
	printf("Ingrese el primer numero\n>>> ");
	scanf("%d", &num1);
	printf("Ingrese el segundo numero\n>>> ");
	scanf("%d", &num2);
	resultado = analizo_numeros(num1, num2);
	printf("%d", resultado);
	return 0;
}

int analizo_numeros (int num1, int num2)
{
	float modulo1, modulo2;
	int im_par;
	if (num1 > num2)
	{
		printf("El numero mayor es: %d\n", num1);
	}
	else
	{
		printf("El numero mayor es: %d\n", num2);
	}
	modulo1 = num1 % 2;
	modulo2 = num2 % 2;
	if ((modulo1 == 0) && (modulo2 == 0))
	{
		im_par = 0;
	}
	else
	{
		im_par = -1;
	}
	return (im_par);
}
