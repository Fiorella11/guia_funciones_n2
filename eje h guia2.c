#include <stdio.h>
#include <stdlib.h>

int resta (int num);

int main()
{
	int num;
	printf("ingrese un numero:\n");
	scanf ("%d,",&num);
	printf("el resultado es: %d\n",resta (num));
	resta (num);
	return 0;
}
int resta (int num)
{
	int doble,cuadrado,rest;
	doble=num*2;
	cuadrado=num*num;
	rest=cuadrado-doble;
	
	return rest;
}

