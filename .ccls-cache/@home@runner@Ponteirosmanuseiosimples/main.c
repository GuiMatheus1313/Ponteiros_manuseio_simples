#include <stdio.h>

int a = 10;
int * aPtr;

//Ponteiro para ponteiro

double x = 10.0;
double * xPtr;
double ** PtrxPtr;

 //Recebe o endereço da variável, NÃO CONTEÚDO 

int main(void) {

  aPtr = &a;
  printf("conteudo de a %d\n", a);
  printf("conteúdo de aPtr %p\n", aPtr);
  printf("endereco de a %p\n", &a);
  printf("\nendereco de aPtr %p\n", &aPtr);
  printf("Valor direcionado de aPtr %d\n\n", *aPtr);
  

  //Ponteiro para ponteiro
  xPtr = &x;
  PtrxPtr = &xPtr;

  printf("conteudo de x %f\n", x);
  printf("conteudo de xPtr %p\n", xPtr);
  printf("endereco de x %p\n", &x);
  printf("endereco de xPtr %p\n", &xPtr);
  printf("conteudo de ptrxPtr %p\n", PtrxPtr);
  printf("endereco de ptrxPtr %p\n", &PtrxPtr);
  printf("indirecao de PtrxPotr %p\n", *PtrxPtr);
  printf("indirecao do conteudo de ptrxPtr %f\n", **PtrxPtr);
  printf("indirecao de xPtr %f\n", *xPtr);
  return 0;
}