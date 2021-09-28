//1) As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se forem compradas
// pelo menos 12. Escreva um programa que leia o número de maçãs compradas,
//calcule e escreva o custo total da compra.

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int quant;
    float valor;
    printf("As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se forem compradas pelo menos 12.\n");
    printf("Quantas maçãs deseja comprar?\n");
    scanf("%d", &quant);
    if(quant <12){
      valor = quant * 1.30;
    }else if(quant >= 12){
      valor = quant * 1;
    }
    printf("Valor total: R$ %.2f\n", valor);

    return 0;
}
