//10)  Ler a hora de início e a hora de fim de um jogo de Xadrez (considere
//apenas horas inteiras, sem os  minutos) e calcule a duração do jogo em horas,
// sabendo-se que o tempo máximo de duração do jogo é  24 horas e que o jogo pode
//iniciar em um dia e terminar no dia seguinte

#include<bits/stdc++.h>
using namespace std;

int main()
{
    float inicio, fim, valor;
    printf("Hora de início: ");
    cin >> inicio;
    printf("Hora de fim: ");
    cin >> fim;
    if(inicio > fim){
      valor = ( 24 - inicio) + fim;
    }else if(fim > inicio){
      valor = fim - inicio;
    }
    printf("Total de horas: %.2f\n", valor);
    return 0;
    // depois teria que arrumar para os minutos irem para horas;
}
