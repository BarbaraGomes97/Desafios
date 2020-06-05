//Ler um nome e dar boas vindas
#include <stdio.h>
int main(){
    char nome[50];
    printf("Digite seu nome: ");
    scanf("%s",&nome);
    printf("Seja bem vindo(a), %s!",nome);
}
