// Conversor de temperatura de C° para Fº
#include <stdio.h>
int main(){
    float temp;
    printf("Digite a temperatura em C: ");
    scanf("%f",&temp);
    printf("%.2f C equivale a %.2f F",temp,(9*temp/5)+32);
}
