#include<stdio.h>

//Programa numero 2.

float datoa (void);
float datob (void);
float datoc (void);
float media3(float, float, float);
void muestra(float);

void main (){
    float a, b, c, m;
    a=datoa();
    b=datob();
    c=datoc();
    m=media3(a, b, c);
    muestra(m);
    
}

float datoa(void){

    float a;
    printf("Introduzca el primer valor \n");
    scanf("%f", &a);
    return a;
} 

float datob(void){

    float b;
    printf("Introduzca el segundo valor \n");
    scanf("%f", &b);
    return b;
} 

float datoc(void){

    float c;
    printf("Introduzca el tercer valor \n");
    scanf("%f", &c);
    return c;
} 

float media3(float a, float b, float c){

    float m;
    m=(a+b+c)/3;
    return m;
} 

void muestra(float m){

    float a;
    printf("El resultado es: %f \n", m);
    
} 