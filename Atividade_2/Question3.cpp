//3)  Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma mensagem que diga se ela
//poderá ou não votar este ano (não é necessário considerar o mês em que a pessoa nasceu).

#include<bits/stdc++.h>
using namespace std;


int main()
{
  //AnoA= Ano Atual, AnoN = Ano Nascimento
    int AnoA, AnoN, result;
    printf("Ano atual: \n");
    scanf("%d", &AnoA);
    printf("Ano que nasceu: \n");
    scanf("%d", &AnoN);

    result = AnoA - AnoN;

    if(result >= 16){
      printf("Poderá votar\n");
    }else{
      printf("Não poderá votar\n");
    }

    return 0;
}
