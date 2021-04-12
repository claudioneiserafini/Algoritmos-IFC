#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variáveis: 
  float e, fat, cont;
  int n, i;

  //Entrada:
  printf("Informe um valor inteiro e positivo para N: ");
  scanf("%d", &n);

  //Calculando
  if(n > 0){ //Verificando se é positivo.
    cont = 1;
    while (cont <= n){ //cont aumenta até chegar no valor de n, ai para de repetir.
      fat = 1;
      for (i=1; i<=cont; i++){// pega o valor de cont que a cada loop aumenta 1, até chegar no valor de n.
        fat *= i; //multiplica 1*2*3*4*n para pegar o fatorial
      }
      e += (1/(float)fat); //com o fatoração feita, ele divide 1 pelo valor que vou achado (fat), salvando em E que pega o valor de E e guarda nele. 
      cont++; //aumenta o cont para chegar até o valor de n.
    }
    e+=1; // e recebe + 1, que está na formula/conta.
    //Saida:
    printf("Resposta E = %.2f \n",e);

  }else{//Se for número negativo.
    printf("Valor de N inválido! \n");
  }

  return 0;
}