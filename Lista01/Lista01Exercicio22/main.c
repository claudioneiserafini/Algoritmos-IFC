#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

int main (void){
//Definindo idioma:
setlocale(LC_ALL, "portuguese");

//Defenindo variaveis:
int vet[TAM], i,j, aux, maior_01, maior_02, soma;

//Entrada: 
for(i=0; i < TAM; i++){
  printf("Escreva %i° valor: ", i+1);
  scanf("%i", &vet[i]);
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

//Encontra o maior número do vetor:
maior_01 = vet[0];
for(int i = 0; i< TAM; i++){
if(vet[i] > maior_01){
maior_01 = vet[i];
}
}

//Encontra o segundo maior número do vetor:
maior_02 = vet[0];
for(int j = 0; j < TAM; j++){
if(vet[j] < maior_01){
maior_02 = vet[j];
}
}

//Mostrar vetor:
printf("\nValores alocados no vetor:");
for(i=0; i < TAM; i++){
  printf("[%d]",vet[i]);
}

//Somar os 2 maiores valores:
soma = maior_01 + maior_02;

//Saida:
printf("\n\nO número %d é maior número do vetor!", maior_01);
printf("\nO número %d é segundo maior número do vetor!", maior_02);
printf("\n\nA soma desses números é: %d.", soma);

return 0; 
}