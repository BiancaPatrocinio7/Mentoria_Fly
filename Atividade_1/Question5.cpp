#include<bits/stdc++.h>
using namespace std;

int main()
{
   int A, M, ano = 365, mes = 30, dias, result;
   printf("Quantos anos você tem?");
   scanf("%d", &A);
   printf("Quantos meses você tem além dos da sua idade?");
   scanf("%d",&M);
   printf("Quantos dias você tem além dos teus meses?");
   scanf("%d",&dias);

   result = (A*ano)+(M*mes)+dias;
   printf("Você tem %d de vida desde que nasceu até hoje", result);


    return 0;
}
