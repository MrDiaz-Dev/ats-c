//tipos de datos

#include <stdio.h>

int main(){

  char a = 'e'; //tamano: 1by, rango: 0..255 
  short b = -15;  //tamano: 2by, rango -128..127
  int c = 1024;   //ta,amo: 2by, rango: -32768..32767
  unsigned int d = 128; //tamano: 2by, rango: 0..65535
  long e = 123456;  //tamano: 4by
  float f = 15.36;  //tamano: 4by
  double m = 12334.12345543;  //tamano; 8by

  printf("el elemento char es: %c ", a);

  printf("\nel elemento short es: %i ", b);

  printf("\nel elemento int es: %i ", c);

  printf("\nel elemento unsigned int es: %i ", d);

  printf("\nel elemento long es: %li ", e);

  printf("\nel elemento float es: %f ", f);

  printf("\nel elemento double es: %lf ", m);




  return 0;
}