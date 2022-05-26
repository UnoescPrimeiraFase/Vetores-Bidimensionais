//Desenvolva um algoritmo capaz de solicitar ao usuário o número de linhas e de colunas para após isto solicitar os valores de cada posição da matriz com o tamanho determinado. Ao final a matriz deve ser impressa na tela. A matriz deve ter tamanho máximo de 7 x 7.

#include <stdio.h>

#define MAX_LINHA 7
#define MAX_COLUNA 7

int main(void) {
  
  int linha, coluna;
    
  do{
    printf("Insira o número linhas\n>>> ");
    scanf("%d",&linha);
  }while(linha < 0|| linha > MAX_LINHA);
    
  do{
    printf("Insira o número colunas\n>>> ");
    scanf("%d",&coluna);
  }while(coluna < 0|| coluna > MAX_COLUNA);
    
  int  matriz [linha][coluna];
    
  for (int i = 0; i < linha; i++){
    
    for (int j = 0; j < coluna; j++){
      printf("[%i] [%i] = ",i,j);
      scanf("%i",&matriz[i][j]);
    }
  }
  
  printf("\n\n");
  
  for (int i = 0; i < linha; i++){
    
  for (int j = 0; j < coluna; j++)
    printf("%i\t",matriz[i][j]);
    
  printf("\n");
  }
}