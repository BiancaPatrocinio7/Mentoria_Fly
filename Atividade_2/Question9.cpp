//N1 + N2 * 2 + N3 * 3 + Média_dos_Exercícios / 7;


#include<bits/stdc++.h>
using namespace std;

int main()
{
  double N1, N2, N3, mediaE, mediaF;
  printf("Nota um: ");
  cin >> N1;
  printf("Nota dois: ");
  cin >> N2;
  printf("Nota três: ");
  cin >> N3;

  mediaE = (N1+N2+N3)/3;
  mediaF = (N1+(N2*2)+(N3*3)+mediaE)/7;
  printf("Nota de rendimento: %.2lf", mediaF);
    return 0;
}
