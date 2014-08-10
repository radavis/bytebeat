// bytebeat

#include <stdio.h>

int main() {
  int t = 0;

  while(1) {
    t++;
    putchar( (t*5&t>>7)|(t*3&t>>10) );
  }
}
