// Faça um programa que leia um ângulo qualquer e mostre na tela o valor do seno, cosseno e tangente desse ângulo.
#include <stdio.h>
#include <math.h>
int main(){
    float an, resp;
    printf("Digite o angulo: ");
    scanf("%f",&an);
    resp = an*3.14/180;
    printf("\nSeno: %f\nCosseno: %f\nTangente: %f",sin(resp),cos(resp),tan(resp));
}
