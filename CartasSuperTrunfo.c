#include <stdio.h>

int main(){
 char estado_1[3];
 char numero_da_carta_1[3];
 char nome_da_cidade_1[3];
 int  populacao_1;

    printf("digite o estado:");
    scanf("%s",estado_1);
    printf("o estado e: %s",estado_1); 

    printf("digite o numero da carta:");
    scanf("%s", numero_da_carta_1);
    printf("o numero da carta e: %s",numero_da_carta_1);

    printf("digite o nome da cidade: ");
    scanf("%s", nome_da_cidade_1);
    printf("o nome da cidade e: %s",nome_da_cidade_1); 
   
    printf("digite a populaçao: ");
    scanf("%d", &populacao_1);
    printf("quantidade da populacao e: %d", populacao_1 );
   
    return 0;
}
