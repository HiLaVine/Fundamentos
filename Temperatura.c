#include<stdio.h>

int temperatura(int);

int main(){
	int n;
	printf("Deme el limite en grados celcius?\n");
	scanf("%d", &n);
	printf(" C    K    F\n");
	temperatura(n);

}

int temperatura(int n){
int i;
float f, k;
	for (i=0;i<=n;i++){
		k=i+273.15;
		f=(i*(9.0/5.0))+32.0;
		printf(" %d  %3.2f  %3.2f\n", i, k, f);
	}
}
