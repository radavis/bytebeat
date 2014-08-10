// 8bit, 8kHz

#include <stdio.h>

int main() {
  for(t = 0;;t++) {
    putchar(t*((t>>9|t>>13)&25&t>>6));
  }
}
