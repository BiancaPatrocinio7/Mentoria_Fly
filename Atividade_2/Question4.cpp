//4) Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se
// que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 5% sobre o que
//ultrapassar este valor, calcular e escrever o seu salário total

#include<bits/stdc++.h>
using namespace std;


int main()
{
    //sF = salario fixo, vV = vendas vendedor
    int sF, vV, x, y;
    printf("Salário fixo: \n");
    scanf("%d", &sF);
    printf("Vendas efetuadas pelo vendedor de uma empresa: \n");
    scanf("%d", &vV);

    if(vV > 1500){
      x = (vV *5)/100;
      printf("Salário toral %d\n", x+sF);
    }else{
      y = (vV *3)/100;
      printf("Salário toral %d\n", y+vV);
    }

    return 0;
}
