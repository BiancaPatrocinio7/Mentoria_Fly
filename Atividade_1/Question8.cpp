#include<bits/stdc++.h>
using namespace std;

int main()
{
  float carro, custo, distribuidor, impostos, X, Y;
  printf("Custo do carro: ");
  scanf("%f", &custo);
  printf("Porcentual do distribuidor: ");
  scanf("%f", &distribuidor);
  printf("Porcentual de impostos: ");
  scanf("%f", &impostos);
  //cacular o valor da porcentagem em valor inteiro
  X = (custo*distribuidor)/100;
  Y = (custo*impostos)/100;
  carro = X + Y + custo;
  printf("O valor total do carro foi de R$ %.3f\n", carro);

    return 0;
}
