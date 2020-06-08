// Escreva um programa que pergunte a quantidade de Km percorridos por um carro alugado e a quantidade de dias pelos quais ele foi alugado. Calcule o preço a pagar, sabendo que o carro custa R$60 por dia e R$0,15 por Km rodado.
#include <stdio.h>
int main(){
    float km, preco;
    int dias;
    printf("Quantidade de km rodado: ");
    scanf("%f",&km);
    printf("Quantidade de dias alugado: ");
    scanf("%d",&dias);
    preco = 60*dias+0.15*km;
    printf("\n%.2fkm percorridos\nAlugado a %d dias\nValor total do aluguel: R$%.2f\n",km,dias,preco);
}
