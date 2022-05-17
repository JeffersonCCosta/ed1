#include <stdio.h>

int fatorial (int n){
  if (n == 1){
    return 1;
  }
  else {
    return n * fatorial (n - 1);
  }
}

int main(void) {
  for (int i = 10; i <= 15; i++){
    fatorial(i);
    printf("Fatorial %d: %d\n", i, fatorial(i));
  }
}