#include<stdio.h>
#define ar 1000

int main(){
int i;
float n, f[ar];
	printf("Introduzca los grados\n");
	scanf("%f", &n);
	printf("C         F \n");
	f[0]=32;
	for (i=1;i<n;i++)
		f[i]=f[i-1]+1.8;

	for (i=0;i<n;i++)
		printf("%d\t %3.1f \n", i, f[i] );
	return 0;
}