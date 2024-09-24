#include<stdio.h>

void abc(char );
void abcAsc(char);
void numde(int);
void numac(int);
	

int main(){
	char c;
	int n;
	abc(c=getchar());
	printf("\n------------\n");
	abcAsc(c);

	scanf("%d", &n);
	numde(n);
	printf("\n------------\n");
	numac(n);
	return 0;

}

void abc(char c){
	putchar(c);
	if (c>'A')
		abc(c-1);
}

void abcAsc(char c){
	if (c>'A')
		abcAsc(c-1);
	putchar(c);

}

void numde(int n){
	printf("%d\n", n);
		if (n>1)
			numde(n-1);

}

void numac(int n){
	if (n>1)
			numac(n-1);
		printf("%d\n", n);

}