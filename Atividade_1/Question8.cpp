#include<bits/stdc++.h>
using namespace std;

int main()
{
  int carro, custo, distribuidor, impostos, X, Y;
  printf("Custo do carro: ");
  scanf("%d", &custo);
  printf("Porcentual do distribuidor: ");
  scanf("%d", &distribuidor);
  printf("Porcentual de impostos: ");
  scanf("%d", &impostos);
  //cacular o valor da porcentagem em valor inteiro
  X = (custo*distribuidor)/100;
  Y = (custo*impostos)/100;
  carro = X + Y + custo;
  printf("O valor total do carro foi de %d\n", carro);

    return 0;
}
