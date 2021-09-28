//2) Ler as notas da 1a. e 2a. avaliações de um aluno. Calcular a média aritmética simples e escrever
//uma mensagem que diga se o aluno foi ou não aprovado (considerar que nota igual ou maior que 6 o
// aluno é aprovado). Escrever também a média calculada.


#include<bits/stdc++.h>
using namespace std;


int main()
{
    float A1, A2, media;
    printf("Sua nota da primeira avalição: \n");
    scanf("%f", &A1);
    printf("Sua nota da segunda avalição: \n");
    scanf("%f", &A2);

    media = (A1+A2)/2;

    if(media>= 6){
      printf("Aprovado\n");
    }else{
      printf("Não aprovado\n");
    }

    return 0;
}
