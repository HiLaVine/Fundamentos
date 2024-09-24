#include<stdio.h>

int main(){
	int i,n=1, s=0;

	printf("Dame una letra mayucula\n");
	scanf("%c", &n);
	for (i='Z';i>=n;i--){
		printf("%c",i );
	}
puts("\n--------------------");
	for (i=n; i<='Z';i++)
		printf("%c",i );
	
	return 0;
}