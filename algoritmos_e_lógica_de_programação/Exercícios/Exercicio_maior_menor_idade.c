//programa que indica, pela idade informada, se o usuario é maior ou menor de idade
#include<stdio.h>
int main(){

    int idade;

    printf("digite sua idade: \n");
    scanf("%d",&idade);

    if(idade>=18)
    printf("Voce e maior de idade!\n");
    else if(idade<18)
    printf("Voce e menor de idade!\n");

return 0;
}