#include<stdio.h>

void intercambia(int*, int*);
void sucesor(int*);
int main(){
	int a=5, b=12;

	printf("Antes de intercambia: a=%d\tb=%d\n",a, b );
	intercambia(&a,&b);
	printf("Despues de intercambia: a=%d\tb=%d\n",a, b );
	printf("Antes de sucesor: a=%d\n",a);
	sucesor(&a);
	printf("Despues de sucesor: a=%d\n",a);
return 0;
}

void intercambia(int *x, int *y){
	int t;
	t=*x;
	*x=*y;
	*y=t;
}

void sucesor(int *z){
	*z=*z+1;
}