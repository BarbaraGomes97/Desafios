// Conversão de reais para dólares
// Na data do exercício, o valor do dólar consta R$4.89
#include <stdio.h>
int main(){
    float valor;
    printf("Digite o valor: R$");
    scanf("%f",&valor);
    printf("R$%.2f equivale a $%.2f dolares",valor,valor/4.89);
}