//Exemplo 4 programa que multiplica 2 numeros e exibe o resultado na tela
#include<stdio.h>
int main(){
    
    int a,b,prod;
    
    printf("Digite o primeiro valor: ");
    scanf("%d",&a);
    
    printf("Digite o segundo valor: ");
    scanf("%d",&b);
    
    prod= a*b;
    printf("o valor do produto é :%d",prod);
    return 0;
}