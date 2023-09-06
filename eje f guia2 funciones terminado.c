#include <stdio.h>
#include <stdlib.h>

int dias (int num);

int main() {
	int num;
	
	printf ("ingrese un numero (del 1 al 12): \n");
	scanf ("%d",&num);
	
	while (num<1 || num>12)
	{
		printf ("numero invalido, ingrese otro:\n");
		scanf ("%d",&num);
	
	}
	
	dias (num);
	
	return 0;
}

int dias (int num)
{
	switch (num)
		{
		case 1: 
		case 3:
		case 5:
		case 8:
		case 10:
		case 12:
			printf ("tu mes tiene 31 dias");
		break;
		
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			printf ("tu mes tiene 30 dias");
		break;
		
		case 2: 
			printf ("tu mes tiene 28 dias");
			
	}
	
	return 0;
	
}
