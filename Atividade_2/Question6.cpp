//6) A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário
//que trabalhar mais de 40 horas receberá hora extra, cujo cálculo é o valor da hora
//regular com um acréscimo de 50%. Escreva um algoritmo que leia o número de horas trabalhadas
// em um mês, o salário por hora e escreva o salário total do funcionário, que deverá ser
//acrescido das horas extras, caso tenham sido trabalhadas  (considere que o mês possua 4 semanas exatas).

#include<bits/stdc++.h>
using namespace std;

int main()
{   
  float Horas, Salario, total;
  printf("Horas trabalhadas em um mês: ");
  scanf("%f", &Horas);
  printf("Valor do salário por hora: ");
  scanf("%f", &Salario);
  //4 semanas = 160 horas, se trabalhar mais 40 fica 200 horas
  if(Horas >= 200){
    total = (160*Salario)+ (Horas - 160)*(Salario/2);
    printf("Salário total: %.2f\n", total);

  }else{
    total = Salario * Horas;
    printf("Salário total: R$ %.2f\n", total);

  }
  return 0;
}
