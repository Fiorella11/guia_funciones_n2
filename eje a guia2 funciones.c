#include <stdio.h>
#include <stdlib.h>

int suma (int num1,int num2);
int multi (int num1,int num2);
float divi (int num1,int num2);
void resta (int num1,int num2);

int main() {
	
	int num1,num2;
	int resp;
	
	printf ("Ingrese un numero:\n");
	scanf ("%d",&num1);
	printf ("Ingrese un numero:\n");
	scanf ("%d",&num2);
	
	printf ("1. SUMAR\n"
			"2. RESTAR\n"
			"3. MULTIPLICAR\n"
			"4. DIVIDIR\n");
	scanf ("%d",&resp);
	
	if (resp==1)
	{
		printf ("La suma entre los numeros es: %d\n",suma (num1,num2));
	}
	else
	{
		if (resp==2)
		{
			resta (num1,num2);
		}
		else
		{
			if (resp==3)
			{
				printf ("La multiplicacion entre los numeros es: %d\n",multi (num1,num2));
			}
			else
			{
				if(resp==4)
				{
					printf ("La division entre los numeros es: %.2f\n",divi (num1,num2));
				}
			}
		}
	}

	return 0;
}
int suma (int num1,int num2)
{
	int sum;
	sum=num1+num2;
	return sum;
}

void resta (int num1,int num2)
{
int rest,resp;
rest=num1-num2;

printf ("La resta entre los numeros es: %d\n",rest);

}

int multi (int num1,int num2)
{
	int mult;
	mult=num1*num2;
	return mult;
}
float divi(int num1,int num2)	
{
	float div;
	div=num1/num2;
	return div;
}

