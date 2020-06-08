// Imprimir a tabuada de x número
#include <stdio.h>
int main(){
    int num, c;
    printf("T A B U A D A\n");
    printf("Digite um numero para consulta: ");
    scanf("%d",&num);
    for (c=0; c<=10; c++){
        printf("%d x %d = %d\n",num,c,num*c);
    }
}
