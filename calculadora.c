#include<stdio.h>

float suma(float, float);
float resta(float, float);
float divi(float, float);
float multi(float, float);
void muestra(float, float, float, float);
float entrada(void);
float entrada2(void);


void main() {
	float s, r, m, d, vu, vd;
	vu=entrada();
	vd=entrada2();
	s=suma(vu, vd);
	r=resta(vu, vd);
	m=multi(vu, vd);
	d=divi(vu, vd);
	muestra(s, r, d, m);
}


	float suma (float vu, float vd){

	float s;
	s= vu + vd;

	return s;
}	

float resta (float vu, float vd){

	float r;
	r= vu - vd;

	return r;
}

float divi (float vu, float vd){

	float d;
	d= vu / vd;

	return d;
}

float multi (float vu, float vd){

	float m;
	m= vu * vd;

	return m;
}

 float entrada(void){
    
    float vu;
    
    printf("Introduzca el primer numero\n");
    
	scanf("%f", &vu);
	
return vu;
} 

 float entrada2(void){
    
    float vd;
    
    printf("Introduzca el segundo numero numero\n");
    
	scanf("%f", &vd);
	
return vd;
}
	
    void muestra(float s, float r, float d, float m){
    
    printf("la suma es: %.2f \n", s);
	printf("la resta es: %.2f \n", r);
	printf("la multiplicacion es: %.2f \n", m);
	printf("la division es: %.2f \n", d);
    

}



