#include <stdio.h>
//CALCULADORA DE OPERACIONES MATEMATICAS BASICAS
void menu();
void suma();
void resta();
void multiplicacion();
void division();

int main()
{
	int opcion;
	
	menu();
	
	getchar();getchar();
	return 0;
}

void menu()
{
	int opcion;
	do
	{
		do
		{
			//system("cls"); //BORRA PANTALLA
			system("color a");//cambio de color letras 
			printf("\nBIENVENIDO A LA CALCULADORA\n");
			printf(" 1) Suma\n");
			printf(" 2) Resta\n");
			printf(" 3) Multiplicacion\n");
			printf(" 4) Division\n");
			printf(" 5) Salir\n\n");
			printf("Ingrese una opcion\n");
			scanf("%d",&opcion);
			
			if(opcion>5 || opcion<1)
			{
				printf("ERROR ingrese una opcion valida (1 al 5)");
			}
		}while(opcion>5 || opcion<1);
		
		switch (opcion)
		{
			case 1:
			suma();
			break;
			
			
			case 2:
			resta();
			break;
			
			
			case 3:
			multiplicacion();
			break;
			
			
			case 4:
			division();
			break;
			
			
			case 5:
			printf("Gracias por su preferencias, adios!!");
			break;
		}
	}while(opcion!=5);
}

void suma()
{
	float suma=0;
	int i,n;
	
	printf(" \n|SUMA|\n");
	printf("Ingrese la cantidad de numeros a sumar: ");
	scanf("%d",&n);
	
	float a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Ingrese el numero a sumar [%d]:  ",i+1);
		scanf("%f",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		suma=a[i]+suma;
	}
	printf("La suma total es de %.3f\n",suma);// LIMIRAR DECIMALES: "%.3f" = limita a 3 decimales
	fflush(stdin);
}

void resta()
{
	float a,b,resta;
	int i,n;
	
	printf(" \n|RESTA|\n");
	printf("Ingrese el primer valor: ");
	scanf("%f",&a);
	
	printf("Ingrese el valor por el que se restara: ");
	scanf("%f",&b);
	
	resta=a-b;
	
	printf("La resta %f - %f = %.3f\n",a,b,resta);
	fflush(stdin);
}

void multiplicacion()
{
	float mult=1;
	int i,n;
	
	printf(" \n|MULTIPLICACION|\n");
	printf("Ingrese la cantidad de numeros a multiplicar: ");
	scanf("%d",&n);
	
	float a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Ingrese el numero a multiplicar [%d]:  ",i+1);
		scanf("%f",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		mult=a[i]*mult;
	}
	printf("La multiplicacion total es de %.3f\n",mult);
	fflush(stdin);
}

void division()
{
	float a,b,division;
	int i,n;
	
	printf(" \n|DIVISION|\n");
	printf("Ingrese el primer valor: ");
	scanf("%f",&a);
	
	printf("Ingrese el valor por el que se dividira: ");
	scanf("%f",&b);
	
	division=a/b;
	
	printf("La division %f / %f = %.3f\n",a,b,division);
	fflush(stdin);
}
