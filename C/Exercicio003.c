// Ler dois números e mostrar sua soma
#include <stdio.h>
int main(){
    int n1, n2, soma;
    printf("Digite um numero: ");
    scanf("%d",&n1);
    printf("Digite mais um numero: ");
    scanf("%d",&n2);
    soma = n1 + n2;
    printf("A soma entre %d e %d equivale a %d",n1, n2, soma);
}
