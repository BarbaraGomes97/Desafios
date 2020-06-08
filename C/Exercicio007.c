// Conversão de um valor em metros para centímetos e milímetros
#include <stdio.h>
int main(){
    float metros;
    printf("Digite o valor em metros(m): ");
    scanf("%f",&metros);
    printf("Valor para conversao: %.1f\nValor em centimetros: %.1f cm\nValor em milimetros: %.1f mm",metros,metros*100,metros*1000);
}