#include <stdio.h>

#define MAX_ARR 1024 // Não modifique esse valor!!

/* 
 * Protótipos das funções - NÃO MODIFIQUE 
 *
 */

// le_vetor deve ler um vetor até receber o valor -100 ou chegar em MAX_ARR.
// O retorno da função deve ser o tamanho do vetor lido.
int le_vetor(int vetor[MAX_ARR]);

// busca_linear deve receber um vetor, seu tamanho e uma chave a ser buscada.
// A função deve implementar o algoritmo de busca linear.
// Seu retorno deve ser o índice onde a chave for encontrada ou,
// caso não tenha encontrado nada, -1.
int busca_linear(int vetor[MAX_ARR], int tam_vetor, int chave);

// Ganharam essa de brinde. =)
void exibe_vetor(int vetor[MAX_ARR], int tam_vetor);

int main (int argc, char *argv[])
{

  return 0;
}

int busca_linear(int vetor[MAX_ARR], int tam_vetor, int chave) {
}

int le_vetor(int vetor[MAX_ARR]) {
}

void exibe_vetor(int vetor[MAX_ARR], int tam_vetor) {
  printf("[");
  for (int i = 0; i < tam_vetor; i++) {
    printf("%i", vetor[i]);
    if ( i < tam_vetor - 1 ) printf(", ");
  }
  printf("]\n");
}