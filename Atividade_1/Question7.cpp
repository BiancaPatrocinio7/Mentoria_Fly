#include<bits/stdc++.h>
using namespace std;

int main()
{
  int  salarioInicial, reajuste, salarioFinal, X;
  printf("Digite o valor de seu salário: ");
  scanf("%d", &salarioInicial);
  printf("Digite o percentual de reajuste: ");
  scanf("%d", &reajuste);
  X =(reajuste*salarioInicial)/100;
  salarioFinal = salarioInicial + X;
  printf("Seu salário ajutado será de %d", salarioFinal);



    return 0;
}
