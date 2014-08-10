#include <stdio.h>

int main() {
  int t, value;
  while(1) {
    t++;
    //value = t*(42&t>>10);
    value = t*((42&t>>10)%14);
    putchar(value);
  }
}
