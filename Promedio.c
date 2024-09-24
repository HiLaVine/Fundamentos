#include<stdio.h>
#define ar 1000
void LeeArreglo(int [], int);
void promedio(int [], int);
int main(){
	int a[ar], n;

	printf("Cuatos valores quieres introducir??\n");
	scanf("%d", &n);
	
	printf("Teclea los elementos\n");
	LeeArreglo(a, n);

	puts("\n--------------------\n");

	promedio(a, n);

return 0;
}

void LeeArreglo(int x[], int n){
	int i;
	for (i=0; i<n;i++)
		scanf("%d",&x[i]);
}

void promedio(int x[], int n){
	int i;
	float prom=0, sum=0;
	for (i=0;i<n;i++)
		sum=sum+x[i];
	prom=sum/n;
	printf("Promedio %0.2f\n",prom );
}
