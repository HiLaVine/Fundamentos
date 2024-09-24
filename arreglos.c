#include<stdio.h>
#define ar 100

int main(){
int n, i, a[ar], t;

/*printf("Dame la base.\n");
scanf("%d", &t);*/
scanf("%d", &n);
a[0]=0;
a[1]=1;
for (i=2;i<n;i++)
	a[i]=a[i-1]*i;

for (i=0;i<n;i++)
	printf("a[%d]=%d \n", i, a[i] );


return 0;
}