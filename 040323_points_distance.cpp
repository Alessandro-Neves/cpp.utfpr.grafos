/*
Alessandro Neves dos Santos

Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:

Distância entre dois pontos

Distancia = raiz_quadrada((x2-x1)^2 + (y2-y1)^2)

Entrada
O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

Saída
Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.

Exemplo de Entrada	    Exemplo de Saída
1.0 7.0
5.0 9.0                 4.4721

-2.5 0.4
12.1 7.3                16.1484
*/

#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main()
{

  double x1, y1, x2, y2;

  cin >> x1;
  cin >> y1;
  cin >> x2;
  cin >> y2;

  double a = pow(x2 - x1, 2);
  double b = pow(y2 - y1, 2);

  double result = sqrt(a + b);

  printf("%.4f\n", result);

  return 0;
}