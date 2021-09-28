#include<b#include<bits/stdc++.h>
using namespace std;

int main()
{
  float n1, n2, n3, mediaFinal;
  printf("Nota do primeiro bimestre: ");
  scanf("%f", &n1);
  printf("Nota do segundo bimestre: ");
  scanf("%f", &n2);
  printf("Nota do terceiro bimestre: ");
  scanf("%f", &n3);
  mediaFinal = ((n1*1)+(n2*2)+(n3*3))/10;
  printf("Media final: %.2f\n", mediaFinal);
    return 0;
}
