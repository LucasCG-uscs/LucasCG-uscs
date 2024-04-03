//programa que recebe um inteiro e informa se o inteiro é positivo, negativo, ou igual a zero
#include<stdio.h>
int main(){
    int a;

    printf("Digite um numero inteiro: \n");
    scanf("%d",&a);

    if(a<0)
    printf("O numero digitado e negativo\n");
    if(a>0)
    printf("O numero digitado e positivo\n");
    if(a==0)
    printf("O numero digitado e zero\n");

return 0;
}