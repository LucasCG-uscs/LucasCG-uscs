//Exercicio 3 pg84_2
#include<stdio.h>
int main(){

    int a,b;
    char nome[50];

    printf("Digite seu nome: \n");
    gets(nome);

    printf("Nome digitado: %s\n",nome);

    printf("Digite um valor para a: \n");
    scanf("%d",&a);

    printf("Digite um valor para b: \n");
    scanf("%d",&b);

    if(a!=b){
    printf("A e diferente de B\n");

    a+=b;
    }
    else
    printf("A e igual a B\n");

return 0;
}