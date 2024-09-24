#include<stdio.h>
#define ar 1000

void LeeArreglo(int [], int);
void EscribeArreglo(int [], int);
void Burbuja(int [], int);
void OrdIncercion(int [], int);
void QuickSort(int [], int);
int main(){
	int a[ar], i, j, n, t;

	printf("Cuantos elementos quieres ordenar??\n");
	scanf("%d", &n);
	//llena el arreglo con n elementos leidos a traves del teclado
	printf("teclea los elementos\n");
	LeeArreglo(a, n);
	//ordena los elemetos del arreglo
	OrdIncercion(a, n);
	puts("\n--------------------\n");
	//imprime los elementos del arreglo
	EscribeArreglo(a,n);
	puts("\n--------------------\n");
	Burbuja(a, n);
	EscribeArreglo(a,n);
	      
	return 0;
}

void LeeArreglo(int x[], int n){
	int i;
	for (i=0; i<n;i++)
		scanf("%d",&x[i]);
}

void EscribeArreglo(int x[], int n){
int i;
for (i=0; i<n;i++)
		printf("a[%d]=%d\n",i, x[i]);	
}

void Burbuja(int a[], int n){
	int i, j, t;
	for(j=1;j<n;j++)
		for (i=n-1;i>0;i--)
			if (a[i]<a[i-1]){
				t=a[i];
				a[i]=a[i-1];
				a[i-1]=t;
				}
}

void OrdIncercion (int a[], int n){
	int j, i, t, k;

	for(k=1;k<n;k++){
		j=k;
		t=a[k];
		while ((a[k]<a[j-1])&&(j>0))
			j--;
		for(i=k;i>j;i--)
			a[i]=a[i-1];
		a[j]=t;

	}
}

void QuickSort(int a[], int n){
/* 	1. Elegir el pivote p.
	2. Mover a la izquierda del pivote todos los elementos
	menores o iguales a este.
	3. Mover a la derecha del pivote todos los elementos 
	mayores a este.
	4. Ordenar la mitad izquierda mediante el Quicksort().
	5. Ordenar la mitad derecha mediante el Quicksort().
*/

}