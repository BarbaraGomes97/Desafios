//Ler um salário e informar o seu valor com um aumento de 15%
#include <stdio.h>
int main(){
    char nome[50];
    float salario, aumento;
    printf("Nome do funcionario: ");
    scanf("%s",&nome);
    printf("Salario atual: R$");
    scanf("%f",&salario);
    aumento = salario*15/100;
    printf("Funcionario: %s\nSalario sem reajustes: R$%.2f\nSalario atualizado: R$%.2f",nome,salario,salario+aumento);
}
