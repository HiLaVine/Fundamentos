#include<stdio.h>

int suma (int, int);
int resta (int, int);
int multiplicacion (int, int);
int division (int, int);

int main (){
	int a,b,c;
	printf("Introduzca los valores\n");
	scanf("%d%d",&a, &b);
	c=suma (a,b);
	printf("el resultado de %d+%d=%d\n", a, b, c );
	c=resta (a,b);
	printf("el resultado de %d-%d=%d\n", a, b, c );
	c=multiplicacion (a,b);
	printf("el resultado de %d*%d=%d\n", a, b, c );
	if (b!=0){
		c=division(a,b);
		printf("el resultado de %d/%d=%d\n", a, b, c );
	}
	else {
		printf("Error, division entre cero.\n");
	}


return 0;
}

int suma(int a, int b){return a+b;}

int resta(int a, int b){return a-b;}

int multiplicacion(int a, int b){return a*b;}

int division(int a, int b){return a/b;}

