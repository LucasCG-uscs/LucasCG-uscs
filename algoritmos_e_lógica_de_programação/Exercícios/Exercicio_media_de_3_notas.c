//programa que calcula a media de 3 notas e exibe, caso exista, a nota que foi abaixo da media
#include<stdio.h>
int main(){

    float n1, n2, n3, media;

    printf("Digite a primeira nota: \n");
    scanf("%f",&n1);

    printf("Digite a segunda nota: \n");
    scanf("%f",&n2);

    printf("digite a terceira nota: \n");
    scanf("%f",&n3);

    media=(n1+n2+n3)/3;

    printf("Media final: %.2f\n",media);

    if(n1<media)
    printf("A nota n1(%.1f) e menor que a media final\n",n1);
    if(n2<media)
    printf("A nota n2(%.1f) e menor que a media final\n",n2);
    if(n3<media)
    printf("A nota n3(%.1f) e menor que a media final\n",n3);

return 0;
}