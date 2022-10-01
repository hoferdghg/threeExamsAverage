#include <stdio.h>
#include <windows.h>

int main(){


    //Definição para UTF-8 e padrão do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    //Definição dos caracteres latinos
    SetConsoleOutputCP(CPAGE_UTF8);

    //Variáveis
    float notas[3] = {0, 0, 0};
    float media = 0.00;
    
    //Execução do código
    printf("\n Escreva a nota da PROVA 1: ");
    scanf("%f", &notas[0]);
    
    printf("\n Escreva a nota da PROVA 2: ");
    scanf("%f", &notas[1]);
    
    
    printf("\n Escreva a nota da PROVA 3: ");
    scanf("%f", &notas[2]);
    
    media = (notas[0] + notas[1] + notas[2])/3;
    
    printf("\n");
    
    printf("\n Nota da PROVA 1: = %.2f", notas[0]);
    printf("\n Nota da PROVA 2: = %.2f", notas[1]);
    printf("\n Nota da PROVA 3: = %.2f", notas[2]);
    
    printf("\n");
    
    printf("\n Média: = %.2f", media);
    
    
    return 0;

    //Definição dos caracteres para o padrão novamente
    SetConsoleOutputCP(CPAGE_DEFAULT);
    
}