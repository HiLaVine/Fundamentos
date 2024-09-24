#include<stdio.h>

void tablademult(int, int);
void tablademult2(int, int);
void itablasdemult(int, int);
void inumasc(int);
void iparesasc(int);
void potencias2(int);
void potencias2v2(int);
int rfib(int);
int ifib(int);

int main(){
	int t;
	printf("Introduzca un valor\n");
	scanf("%d", &t);
/*
	tablademult(t,10);
	puts("\n----------------\n");
	tablademult2(t,10);
	puts("\n----------------\n");
	itablasdemult(t,10);*/
	ifib(t);
	printf("fib(%d)=%d\n",t, ifib(t));
	return 0;

}

void tablademult(int t, int n){
	if (n>1)
			tablademult(t, n-1);
		printf("%d*%d=%d\n", t, n, t*n);
}

void tablademult2(int t, int n){
	printf("%d*%d=%d\n", t, n, t*n);
	if (n>1)
			tablademult2(t, n-1);		
}

void itablasdemult(int t, int n){
	int i;
	for(i=1;i<=n;i++)
		printf("%d*%d=%d\n", t, i, i*t);
}

void holan(int n){
	int i;
	for(i=1;i<=n;i++)
		printf("%d hola\n", i);

}

void inumasc(int t){
	int i;
	for(i=1;i<=t;i++)
		printf("i=%d\t%d<=%d?%d\n", i, i, t, i<=t);

}

void iparesasc(int t){
	int i;
	for (i=2;i<=t;i+=2){
		//if (i%2==0)
		printf("%d\n",i );
	}


}

void potencias2(int t){
	int i=1, j=1;
	printf("%d\n",j);
	for (i=1;i<t;i++){
		printf("%d\n",j*=2);
	}


}

void potencias2v2(int t){
	int j=1;
	for (;t--;j*=2){
		printf("%d\n",j);
	}


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
