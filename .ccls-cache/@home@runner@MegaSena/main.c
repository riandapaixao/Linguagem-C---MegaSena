#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int i, nro, cartao[61] = {0};
  
  for(i=1; i<=6; i++) {
    do {
    nro = (rand() % 60) + 1;
      } while (cartao[nro] ==1);

      cartao[nro] = 1;
  }
    printf("Jogo: {");
    for(i=1; i<=60; i++ ) {
      if (cartao[i] == 1)
        printf(" %d", i);
    }

    printf(" }\n");
  
  return 0;
}