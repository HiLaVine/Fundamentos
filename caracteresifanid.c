#include<stdio.h>

int main(){

	char a;
	printf("introduzca un caracter \n");
	scanf("%c", &a);

		if (a>='0')
			if (a<='9')
				printf("Es un numero\n");
				else if (a>='A')
					if (a<='Z')
						printf("Es una letra mayuscula\n");
							else if (a>='a')
								if (a<='z')
									printf("Es una letra minuscula\n");
								else
									printf("No es ninguna\n");
								else 
									printf("No es ninguna\n");
					else 
			printf("No es ninguna\n");
		else 
			printf("No es ninguna\n");





	return 0;
}