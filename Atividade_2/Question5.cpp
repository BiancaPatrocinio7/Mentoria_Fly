//5) Faça um algoritmo para ler: número da conta do cliente, saldo, débito e crédito. Após, calcular e
//escrever o saldo atual (saldo atual = saldo - débito + crédito). Também testar se saldo atual for
// maior ou igual a zero escrever a mensagem 'Saldo Positivo', senão escrever a mensagem 'Saldo Negativo'.

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int nConta, saldo, debito, credito, saldoAtual;
    printf("Número da conta do cliente: \n");
    scanf("%d", &nConta);
    printf("Número da conta do saldo: \n");
    scanf("%d", &saldo);
    printf("Número da conta do débito: \n");
    scanf("%d", &debito);
    printf("Número da conta do crédito: \n");
    scanf("%d", &credito);
    saldoAtual = saldo - debito + credito;

    if( saldoAtual >= 0){
      printf("Saldo Positivo\n");
    }else if( saldoAtual <0){
      printf("Saldo Negativo\n");
    }

    return 0;
}
