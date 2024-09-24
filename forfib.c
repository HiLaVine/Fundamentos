#include<stdio.h>

int rfib(int);
int ifib(int);
int isumatoria(int);
int ifactorial(int);
int tablafactorial(int);

int main(){
	int i,n;
	printf("Hasta cual numero quieres la serie de fibonacci\n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		printf("Fib(%d)=%d\n", i, rfib(i));

	printf("Hasta cual numero quieres la sumatoria\n");
	scanf("%d",&n);
	printf("Sum(%d)=%d\n",n,isumatoria(n));

	printf("Hasta cual numero quieres la tabla de factoriales\n");
	scanf("%d",&n);
	tablafactorial(n);
	return 0;
}

int rfib(int n){
	if (n==0)
		return 0;
	else if (n==1)
		return 1;
	else 
		return rfib(n-1)+rfib(n-2);

}

int ifib(int n){
	int i,f0=0, f1=0, fn=0;
	if (n==0)
		return f0;
	else if (n==1)
		return f1;
	else {
		for (i=2; i<=n;i++){
			fn=f0+f1+fn;
			f0=f1;
			f1=fn;
		}
		return fn;
	}
}

int isumatoria(int n){
	int i, s=0;
	for (i=0;i<=n;i++)
		s=s+i;
	return s;
}

int ifactorial(int n){
	int i, f=1;
	for (i=1;i<=n;i++)
		f=f*i;
	return f;
}

int tablafactorial(int n){
	int i;
	for (i=1;i<=n;i++)
		printf("Fac(%d)=%d\n",i,ifactorial(i));
}