//Ler um numero e mostrar seu antecessor e sucessor
#include <stdio.h>
int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    printf("%d e o antecessor de %d. E %d e seu sucessor",n-1,n, n+1);
}
