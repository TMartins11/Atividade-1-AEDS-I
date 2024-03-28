/* Programa que diz ao usuário o tipo de triângulo formado com base nas medidas dos 3 lados inseridas por ele.

Autor: Thiago Martins

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  /*Nessa primeira parte do código, declaramos as variáveis usadas para representar os lados do triângulo, assim como
  inserimos os comandos que instruem o usuário a digitar as medidas do polígono, de modo que sejam armazenadas*/

  float lado1, lado2, lado3;

  cout << endl
       << "\tVamos formar triângulos!!!" << endl;

  cout << endl
       << "Insira a medida do primeiro lado do polígono: ";
  cin >> lado1;
  while (lado1 <= 0)
  {
    cout << "Medida inválida!!! Insira um novo valor: ";
    cin >> lado1;
  }

  cout << "Insira a medida do segundo lado do polígono: ";
  cin >> lado2;
  while (lado2 <= 0)
  {
    cout << "Medida inválida!!! Insira um novo valor: ";
    cin >> lado2;
  }

  cout << "Insira a medida do terceiro lado do polígono: ";
  cin >> lado3;
  while (lado3 <= 0)
  {
    cout << "Medida inválida!!! Insira um novo valor: ";
    cin >> lado3;
  }

  /*Nessa segunda parte do código, estabelecemos as condições que irão emitir o tipo de triângulo formado pelo usuário,
  se, é claro, for possível formar a figura com as dimensões inseridas por ele*/

  if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1)
  {
    cout << endl
         << "O Triângulo formado é";
    if (lado1 == lado2 && lado1 == lado3)
    {
      cout << " equilátero";
    }
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
    {
      cout << " isósceles";
    }
    else
    {
      cout << " escaleno";
    }
  }

  /*E para finalizar, inserimos uma condicional que informa ao usuário se o triângulo formado por ele é também um
  triângulo retângulo*/

  if (pow(lado1, 2) == pow(lado2, 2) + pow(lado3, 2) || pow(lado2, 2) == pow(lado1, 2) + pow(lado3, 2) ||
      pow(lado3, 2) == pow(lado1, 2) + pow(lado2, 2))
  {

    cout << " e retângulo";
  }

  return 0;
}