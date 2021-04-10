#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 2

int main (void){
//Definindo idioma:
setlocale(LC_ALL, "portuguese");

//Defenindo variaveis:
int vet[TAM], i, maior;

//Entrada: 
for(i=0; i < TAM; i++){
  printf("Escreva %i° valor: ", i+1);
  scanf("%i", &vet[i]);
}

//Encontra o maior número do vetor:
maior= vet[0]; //pega o primeiro n° como se fosse o maior(para pegar valores negativos)
for(i=0; i < TAM; i++){
  if( vet[i] > maior){
    maior = vet[i];
  }
}

//Mostrar vetor:
printf("\nValores alocados no vetor:");
for(i=0; i < TAM; i++){
  printf("[%d]",vet[i]);
}

//Saida:
printf("\n\nO número %d é maior número do vetor!", maior);

return 0; 
}