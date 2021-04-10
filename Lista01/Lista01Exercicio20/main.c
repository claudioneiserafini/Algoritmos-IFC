#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 4

int main (void){
//Definindo idioma:
setlocale(LC_ALL, "portuguese");

//Defenindo variaveis:
int vet[TAM], i, j, aux;

//Entrada: 
for(i=0; i < TAM; i++){
  printf("Escreva %d° valor: ", i+1);
  scanf("%d", &vet[i]);
}

//Ordenar vetor em cresecente:
for(i=0; i < TAM; i++){
  for(j=i; j < TAM; j++){
    if(vet[i] > vet[j]){
      aux = vet[i];
      vet[i] = vet[j];
      vet[j] = aux;
    }
  }
}

//Mostrar vetor:
printf("\nVetor em ordem crescente:");
for(i=0; i < TAM; i++){
  printf("\n[%d]",vet[i]);
}

return 0; 
}