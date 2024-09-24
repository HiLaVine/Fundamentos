#include<stdio.h>
int sumatoria(int);
int rfact(int);
int rsuma(int, int);
int rmult(int, int);

int main(){
	int a,b,c;
	printf("Introduzca un valor\n");
	scanf("%d %d", &a, &b);
	c=sumatoria(a);
	printf("la sumatoria de %d es %d\n", a, c );
	c=rfact(a);
	printf("el factorial de %d es %d\n", a, c );
	c=rsuma(a,b);
	printf("%d+%d=%d\n", a, b, c );
	c=rmult(a,b);
	printf("%d*%d=%d\n", a, b, c );
	return 0;
}

int sumatoria(int n){

	if (n==0)
		return 0;
	else 
		return n+sumatoria(n-1);
}

int rfact(int n){
	if ((n>=0)&&(n<=1))
		return 1;
	else 
		return n*rfact(n-1);
}

int rsuma(int a, int b){
	if ((b>=0)&&(b<=0))
		return a;
	else 
		return rsuma(a+1,b-1);
}

int rmult(int a, int b){
	if ((b>=0)&&(b<=0))
		return 0;
	else if ((b>=1)&&(b<=1))
		return a;
	else rsuma(a, rmult(a,b-1));
}