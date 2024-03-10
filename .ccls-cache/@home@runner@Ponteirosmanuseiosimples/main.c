#include <stdio.h>

int a = 10;
int * aPtr;

 //Recebe o endereço da variável, NÃO CONTEÚDO 

int main(void) {

  aPtr = &a;
  printf("conteudo de a %d\n", a);
  printf("conteúdo de aPtr %p\n", aPtr);
  printf("endereco de a %p\n", &a);
  printf("\nendereco de aPtr %p\n", &aPtr);
  printf("Valor direcionado de aPtr %d\n", *aPtr);
  return 0;
}