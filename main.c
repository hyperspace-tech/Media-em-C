#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("de quantos numeros voce deseja calcaular a media? ");
    scanf("%d",&num);
    int i;
    float soma = 0;
    float temp;
    for(i=1;i<=num;i++){
        scanf("%f",&temp);
        soma += temp;
    }
    printf("%f",soma/num);
}
