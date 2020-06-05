// Ler duas notas de um determinado aluno e mostrar sua média
#include <stdio.h>
#include <string.h>
int main(){
    float n1, n2;
    char nome[50];
    printf("Digite o nome do aluno(a): ");
    scanf("%s",&nome);
    printf("Nota 1: ");
    scanf("%f",&n1);
    printf("Nota 2: ");
    scanf("%f",&n2);
    printf("Aluno(a): %s\nSoma das notas: %.2f\nMedia final: %.2f",nome,n1+n2,(n1+n2)/2);
}
