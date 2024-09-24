#include<stdio.h>

int rfact(int);
int nCr(int, int);

int main(){
int n,r, c;
	printf("Introduzca los valores\n");
	scanf("%d%d",&n, &r);
	c=nCr (n,r);
	printf("el resultado de %dC%d=%d\n", n, r, c );


return 0;
}

int suma(int a, int b){return a+b;}

int resta(int a, int b){return a-b;}

int multiplicacion(int a, int b){return a*b;}

int division(int a, int b){return a/b;}

int rfact(int n){
	if ((n>=0)&&(n<=1))
		return 1;
	else 
		return n*rfact(n-1);
}

int nCr(int n, int r){

	return division(rfact(n),multiplicacion(rfact(resta(n,r)),rfact(r)));
}