//Faça um programa que leia o comprimento do cateto oposto e do cateto adjacente de um triângulo retângulo. Calcule e mostre o comprimento da hipotenusa.
#include <stdio.h>
#include <math.h>
int main(){
    float c1, c2;
    printf("Comprimento do cateto oposto: ");
    scanf("%f",&c1);
    printf("Comprimento do cateto adjacente: ");
    scanf("%f",&c2);
    printf("\nA hipotenusa vai medir: %.2f",hypot(c1,c2));
}
