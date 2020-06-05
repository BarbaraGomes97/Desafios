//Ler um numero e mostrar seu dobro, triplo e raiz quadrada
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    float raiz;
    printf("Digite um numero: ");
    scanf("%d",&n);
    raiz = sqrt(n);
    printf("O dobro de %d equivale a %d, seu triplo e %d e a raiz quadrada %.1f",n,n*2,n*3,raiz);
}
