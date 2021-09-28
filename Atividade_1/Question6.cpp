#include<bits/stdc++.h>
using namespace std;

int main()
{
   int eleitores, brancos, nulos, validos, B, N, V;
   printf("Quantidade de eleitores: ");
   scanf("%d",&eleitores);
   printf("Quantidade de votos brancos: ");
   scanf("%d", &brancos);
   printf("Quantidade de votos nulos: ");
   scanf("%d", &nulos);
   printf("Quantidade de votos validos: ");
   scanf("%d", &validos);
   B = (brancos*100)/eleitores;
   N = (nulos*100)/eleitores;
   V = (validos*100)/eleitores;
   printf("Percentual de votos bracos foi de %d%%, de votos brancos foi de %d%% e de votos validos foi de %d%%\n", B, N, V);


    return 0;
}
