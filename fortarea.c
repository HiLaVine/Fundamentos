#include<stdio.h>

int sumatoria(int);
int potencia(int, int);

int main(){
	int t, p;

	printf("Introduzca un valor\n");
	scanf("%d", &t);
	printf("Introduzca el exponente\n");
	scanf("%d", &p);
	printf("i     s=s+i\n");
	sumatoria(t);
	puts("\n-----------------\n");
	potencia(t,p);

	return 0;
}

int sumatoria(int n){
	int i, s=0;
	for (i=0;i<=n;i++){
		s=s+i;
		printf("%d      %d\n", i, s);
	}
}

int potencia(int b, int e){
	int i, s=1;
	for  (i=1;i<=e;i++)
		s=s*b;
	printf("El numero %d elevado a %d es: %d\n",b,e,s);
}