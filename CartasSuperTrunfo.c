#include <stdio.h>

int main(){
    char Estado_1[3];
    char Numero_da_carta_1[3];
    char Cidade_1[3];
    int Populacao_1;
    float Area_em_km_1; 
    float PIB_1;
    int Pontos_Turisticos_1;
 
    printf("digite o estado: ");
    scanf("%s", Estado_1);
    printf("o estado e: %s ",Estado_1); 

    printf("digite o numero da carta: ");
    scanf("%s", Numero_da_carta_1); 
    printf("o numero da carta e: %s ",Numero_da_carta_1);

    printf("digite o nome da cidade: ");
    scanf("%s", Cidade_1);
    printf("o nome da cidade e: %s ",Cidade_1); 
   
    printf("digite a populaçao: ");
    scanf("%d", &Populacao_1);
    printf("quantidade da populacao e: %d ", Populacao_1 );
    
    printf("digite a área em km"  );
    scanf("%f", &Area_em_km_1);
    printf("tamanho da área e: %f ", Area_em_km_1 );
    
    printf("digite o PIB"  );
    scanf("%f", &PIB_1); 
    printf("o PIB e: %f  ", PIB_1  );
    
    printf("digite os pontos turisticos"  );
    scanf("%d", &Pontos_Turisticos_1);
    printf("numeros de pontos turisticos e: %d ", Pontos_Turisticos_1 );


    char Estado_2[3];
    char Numero_da_carta_2[3];
    char Cidade_2[20];
    int Populacao_2;
    float Area_2; 
    float PIB_2;
    int Pontos_Turisticos_2;

    printf("digite o estado 2 " );
    scanf("%s", Estado_2);
    printf("estado e: %s ", Estado_2 );

    printf("digite o numero da carta 2 " );
    scanf("%s", Numero_da_carta_2);
    printf("o numero da carta 2 e: %s ", Numero_da_carta_2 );

    printf("digite a cidade 2 " );
    scanf("%s", Cidade_2);
    printf("a cidade e: %s ", Cidade_2);
 
    printf("digite a populacao " );
    scanf("%d",&Populacao_2);
    printf("a quantidade da populacao e: %d ", Populacao_2 );
  
    printf("digite a area em km " );
    scanf("%f",&Area_2);
    printf("a area em km e: %f ", Area_2 );

    printf("digite o PIB" );
    scanf("%f", &PIB_2);
    printf("o PIB e: %f ", PIB_2 );
     
    printf("digite os pontos turisticos"  );
    scanf("%d", &Pontos_Turisticos_2);
    printf("numeros de ponto turisticos sao: %d ", Pontos_Turisticos_2 );

    return 0;
}
