// A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o sal�rio
//e o n�mero de filhos. A prefeitura quer saber:
//a) A m�dia de sal�rio da popula��o
//b) A m�dia do n�mero de filhos
//c) O maior sal�rio
//d) A porcentagem de pessoas com sal�rio acima de R$1200,00
//e) N�mero de habitantes

#include <stdio.h>
#include <stdlib.h>


int main () {

float sal;
float soma;
float maior;
int k;
int filhos;
int n;
int media;
float percent;
int i;

n = 0;
percent = 0;
soma = 0;
maior = 0;
k = 0;

printf ("Digite o numero de habitantes:\n");
scanf ("%i", &n);


for (i=0; i < n; i++){

 printf ("Digite seu salario:\n");
 scanf ("%f", &sal);
 printf ("Digite a quantidade de filhos que voc� possui:\n");
 scanf ("%i", &filhos);


 media += sal;
 soma += filhos;

  if (sal > maior) {
    maior = sal;
  }

  if (sal > 1200) {
    k ++;
  }
}

soma = soma/n;
media = media/n;
percent = (k/n) * 100;

printf ("A media de filhos %.2f \n", soma);
printf ("A media de salario %.2f \n", media);
printf ("O maior salario %.2f \n", maior);

}
