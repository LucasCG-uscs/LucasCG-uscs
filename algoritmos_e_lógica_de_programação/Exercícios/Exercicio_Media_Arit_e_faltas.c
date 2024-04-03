//calculo de media aritmetica com 2 notas + reprovação por falta
#include<stdio.h>
int main(){

    float N1,N2;
    int faltas;

    printf("Digite a primeira nota: \n");
    scanf("%f",&N1);

    printf("Digite a segunda nota: \n");
    scanf("%f",&N2);

    printf("Digite o numero de faltas: \n");
    scanf("%d",&faltas);

    if((N1+N2)/2 >= 6 && faltas<=12)
    printf("Aprovado!\n");
    else
    printf("Reprovado!\n");

return 0;
}