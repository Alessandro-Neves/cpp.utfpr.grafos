/*
Alessandro Neves dos Santos
Notas e Moedas
Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.
Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).
Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.
Obs: Utilize ponto (.) para separar a parte decimal.
Exemplo de Entrada          Exemplo de Saída
576.73                      NOTAS:
                            5 nota(s) de R$ 100.00
                            1 nota(s) de R$ 50.00
                            1 nota(s) de R$ 20.00
                            0 nota(s) de R$ 10.00
                            1 nota(s) de R$ 5.00
                            0 nota(s) de R$ 2.00
                            MOEDAS:
                            1 moeda(s) de R$ 1.00
                            1 moeda(s) de R$ 0.50
                            0 moeda(s) de R$ 0.25
                            2 moeda(s) de R$ 0.10
                            0 moeda(s) de R$ 0.05
                            3 moeda(s) de R$ 0.01
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

  double coins[12] = {100, 50, 20, 10, 5, 2, 1, 0.5, 0.25, 0.1, 0.05, 0.01};
  double input;
  int result[12] = {0};

  cin >> input;

  int total = int(input * 100);

  int i = 0;
  while (total >= 1)
    for (int c = 0; c < 12; c++)
      if ((total - int(coins[c] * 100)) >= 0)
      {
        result[c]++;
        total -= int(coins[c]*100);
        break;
      }

  printf("NOTAS:\n");
  for (int n = 0; n < 6; n++)
    printf("%d nota(s) de R$ %.2f\n", result[n], coins[n]);

  printf("MOEDAS:\n");
  for (int c = 6; c < 12; c++)
    printf("%d moeda(s) de R$ %.2f\n", result[c], coins[c]);

  return 0;
}
