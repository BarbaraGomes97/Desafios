#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    char n0[50], n1[50], n2[50], n3[50];
    int sorteio;
    printf("Digite o 1o. nome: ");
    scanf("%s",&n0);
    printf("Digite o 2o. nome: ");
    scanf("%s",&n1);
    printf("Digite o 3o. nome: ");
    scanf("%s",&n2);
    printf("Digite o 4o. nome: ");
    scanf("%s",&n3);
    srand(time(NULL));
    sorteio = rand() % 4;
    if (sorteio == 0){
        printf("\nO nome sorteado foi %s!",n0);
    }
    else{
        if (sorteio == 1){
            printf("\nO nome sorteado foi %s!",n1);
        }
        else{
            if (sorteio == 2){
                printf("\nO nome sorteado foi %s!",n2);
            }
            else{
                printf("\nO nome sorteado foi %s!",n3);
            }
        }
    }
}
