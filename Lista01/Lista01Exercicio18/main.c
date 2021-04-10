#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main (void){
//Definindo idioma:
setlocale(LC_ALL, "portuguese");

//Defenindo variaveis:
int ano_nascimento, mes_nascimento, dia_nascimento, idade;

//Pegando data da maquina:
time_t mytime;
mytime = time(NULL);
struct tm tm = *localtime(&mytime);

//Entrada: 
  printf("Informe seu dia de nascimento: ");
  scanf("%d", &dia_nascimento);

  printf("Informe seu mês de nascimento: ");
  scanf("%d", &mes_nascimento);

  printf("Informe seu ano de nascimento: ");
  scanf("%d", &ano_nascimento);

  printf("%d/%d/%d",dia_nascimento, mes_nascimento, ano_nascimento);

//Calculando e vericando dia e mês
if(mes_nascimento <= tm.tm_mon + 1 && dia_nascimento+1 >= tm.tm_mday){
  idade = (tm.tm_year+1900)-(ano_nascimento); //completou
} else{
    idade = ((tm.tm_year+1900)-(ano_nascimento)-1); //não completou
}

//Verificando se podem votar ou não:
if(idade >=16){
  printf("\nVocê tem %d anos e já pode votar!", idade);
}else{
  printf("\nVocê tem %d anos, infelizmente você não pode votar!", idade);
}

return 0; 
}