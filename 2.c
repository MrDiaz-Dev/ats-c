#include<stdio.h>

#define PI 3.1416     // definicion de constantes

int y = 5;            // var global

int main()
{

  int x = 10;         // var local

  float suma = 0;

  suma = PI + x;

  printf("la suma es: %.2f", suma); // forma de imprimir vars limitando los decimales de un float

  return 0;
}