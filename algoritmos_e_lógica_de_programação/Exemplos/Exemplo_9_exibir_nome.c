//exemplo 9; programa que recebe um nome digitado pelo usuário e exibe o nome na template
#include<stdio.h>
int main(){
    char nome[100];
    
    printf("digite um nome: ");
    scanf("%s",nome);
    
    //gets(nome);
    
    printf("nome: %s", nome);
    
    return 0;
}