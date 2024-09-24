#include<stdio.h>

int main()
{
// Este programa detecta si un caracter es un numero, letra mayuscula o letra minuscula.
	char a; 
	printf("ingrese un caracter:\n");
	scanf("%c", &a);
	
	if ((a>='0') && (a<='9'))
		printf("El caracter es un numero.\n");
		else if ((a>='A') && (a<='Z'))
			printf("El caracter es una letra mayuscula.\n");
			else if ((a>='a') && (a<='z'))
				printf("El caracter es una letra minuscula.\n");
				else
					printf("El caracter no es un numero, una letra mayuscula ni una letra minuscula.\n");		
return 0;
}