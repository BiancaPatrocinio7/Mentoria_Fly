//8) Faça um algoritmo para ler: a descrição do produto (nome), a quantidade adquirida e o preço
//unitário. Calcular e escrever o total (total = quantidade adquirida * preço unitário), o desconto
// e o total a pagar (total a pagar = total - desconto), sabendo-se que:

//- Se quantidade <= 5 o desconto será de 2%
//- Se quantidade > 5 e quantidade <=10 o desconto será de 3%
//- Se quantidade > 10 o desconto será de 5%


#include<bits/stdc++.h>
using namespace std;

int main()
{

    string nome;
    float quant, valor, total, totalFinal, des;
    printf("Qual descrição do produto você deseja comprar?: ");
    cin >> nome;
    printf("Qual a quantidade desejada?: ");
    cin >> quant;
    printf("Qual é o preço unitário?: ");
    cin >> valor;

    total = quant*valor;
    if(quant <= 5){
       des = (2*quant)/100;
       totalFinal = total - des;
    }else if(quant > 5 && quant <= 10){
       des = (3*quant)/100;
       totalFinal = total - des;
    } else if(quant > 10){
       des = (5*quant)/100;
       totalFinal = total - des;
    }
    printf("Valor total: R$ %.2f", totalFinal);
    return 0;
}
