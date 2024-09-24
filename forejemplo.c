#include<stdio.h>

int main(){
	char c='A';
	int n=0;

	for(n=0;c!='#';n++)
		putchar(c=getchar());
	printf("El numero de caracteres es %d\n",--n);

return 0;
}