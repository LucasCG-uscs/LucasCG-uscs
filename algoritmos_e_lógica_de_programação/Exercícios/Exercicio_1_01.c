//Exercício 1: programa que calcula a soma de dois numeros e exibe o resultado na tela
#include<stdio.h>
int main(){

    int a,b,soma;
    
    printf("Digite o primeiro valor: ");
    scanf("%d",&a);
    
    printf("Digite o segundo valor: ");
    scanf("%d",&b);
    
    soma= a+b;
    
    printf("o valor da soma é: %d",soma);
    
    return 0;
}