//
//  fibonacci.c
//  
//
//  Created by Renato Semadeni on 21.12.16.
//
//

#include <stdio.h>

void fib(int cnt, int prev, int cur) {
  
  if (cnt == 0)
    return;
  
  fib(--cnt, cur, cur+prev);
  printf("%i\n", cur);
}

int main() {
  fib(10, 0, 1);
  
  return 1;
}
