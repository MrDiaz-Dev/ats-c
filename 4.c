//entradas y salidas

#include <stdio.h>

int main(){
  int a = 10;
  float b = 15.5;
  char c = 'e';


  printf("%i %f %c",a,b,c);

  int a2;
  int b2;
  char x[50];

  printf("\ndame un numero: ");
  scanf("%i", &a2);

  printf("\ndame otro numero: ");
  scanf("%i", &b2);


  printf("\ndame tu nombre");
  scanf("%s", x);
  printf("tu nombre es %s", x);


  return 0;
}