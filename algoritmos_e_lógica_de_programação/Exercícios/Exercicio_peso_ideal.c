//programa para calculo do peso ideal
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    char sexo;
    float altura,PI;
    setlocale(LC_ALL,"Portuguese");

    printf("Informe seu sexo, sendo M(Masculino) e F(Feminino): \n");
    scanf("%c",&sexo);

    if(sexo== 'M'|| sexo== 'm'){
        printf("Digite sua altura: ");
        scanf("%f",&altura);

        PI=72.7*altura-58;

        printf("seu peso ideal: %.2fkg\n",PI);
    }

    else if(sexo== 'F'|| sexo== 'f'){
        printf("Digite sua altura: ");
        scanf("%f",&altura);

        PI=62.1*altura-44.7;

        printf("seu peso ideal: %.2fkg\n",PI);
    }

    else if(sexo !='M'|| sexo !='m'|| sexo !='F'|| sexo !='f'){
        printf("ERRO! sexo invalido!\n");
    }

    system ("pause");
return 0;
}