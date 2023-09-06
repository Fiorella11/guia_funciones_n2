#include <stdio.h>
#include <stdlib.h>

void asteriscos (int cantidad)
{
	int i,j;
	for (i=1;i<=cantidad;i++) 
	{
		for (j=1;j<=i;j++) 
		{
			printf("*");
		}
		printf("\n");
	}
}
int main() {
	int asterisco;
	printf ("Ingrese cantidad de asteriscos: ");
	scanf ("%d",&asterisco);

		asteriscos(asterisco);
	return 0;
}


