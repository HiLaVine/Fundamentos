#include<stdio.h>
#define ar 1000
void LeeArreglo(int [], int);
void comp(int[], int, int);
int main(){
	int a[ar], n, vr;

	printf("Cuatos valores quieres introducir??\n");
	scanf("%d", &n);
	
	printf("teclea los elementos\n");
	LeeArreglo(a, n);

	printf("Introduzca el valor de referencia\n");
	scanf("%d", &vr);

	puts("\n--------------------\n");

	comp(a, n, vr);
return 0;
}

void LeeArreglo(int a[], int n){
	int i;
	for (i=0; i<n;i++)
		scanf("%d",&a[i]);
}

void comp(int a[], int n, int vr){
	int i, k=0;
	for (i=0; i<n;i++){
		if(a[i]<vr)
			k++;
	}
	printf("Los valores menores a %d son %d\n",vr, k);

}