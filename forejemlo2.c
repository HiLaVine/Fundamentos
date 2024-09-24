#include<stdio.h>

int main(){
	int i,t,n;

	printf("Cual tabla de multiplicar quieres y hasta que numero\n");
	scanf("%d%d", &t, &n);

	for(i=1;i<=n;i++)
		printf("%d * %d = %d\n",t,i,i*t );
return 0;
}