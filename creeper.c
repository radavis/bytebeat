// 8bit, 8kHz

#include <stdio.h>

int main() {
  for(int t=0;;t++) {
    putchar( (int)(t/1e7*t*t+t)%127 | t>>4 | t>>5 | t%127 + (t>>16) | t );
  }
}
