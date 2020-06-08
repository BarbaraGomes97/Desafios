// Ler um preço e informar seu valor final com 5% de desconto
#include <stdio.h>
int main(){
    float valor, desc;
    printf("Digite o valor do produto: R$");
    scanf("%f",&valor);
    desc = valor*5/100;
    printf("Preco final do produto: R$%.2f",valor-desc);
}
