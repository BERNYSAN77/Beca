#include <stdio.h>

int main(void) {
 float promedio;
  printf("Ingrese su promedio: ");
  scanf("%f",&promedio);
  if(promedio >= 8.5)
    printf("Usted es candidato a una beca");
  else
    printf("Su promedio no es suficiente para solicitar una beca");
  return 0;
}