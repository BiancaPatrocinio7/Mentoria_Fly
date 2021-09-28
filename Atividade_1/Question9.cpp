#include<bits/stdc++.h>
using namespace std;

int main()
{
  int grauF, C;
  printf("Valor em Fahrenheit: ");
  scanf("%d", &grauF);
  C = ((grauF - 32)*5)/9;
  printf("Convertido para  Celsius: %d\n", C);

    return 0;
}
