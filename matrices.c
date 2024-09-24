#include<stdio.h>

int main(){
	int m[3][3]={1};
	int i,j;

	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			m[i][j]=(i+1)*(j+1);
	}	

	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d\t",m[i][j]);	
		printf("\n");
	}

return 0;
}