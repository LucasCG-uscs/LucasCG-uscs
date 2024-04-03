//Exercício 2: programa que calcula o produto de dois numeros digitados pelo usuário e imprime o resultado na template
#include<stdio.h>
int main (){
    
    int a,b,prod;
    
    printf("Digite o primerio valor: ");
    scanf("%d",&a);
    
    printf("Digite o segundo valor: ");
    scanf("%d",&b);
    
    prod= a*b;
    printf("o valor do produto é: %d",prod);
    
    return 0;
}
