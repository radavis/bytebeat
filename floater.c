// 8bit, 8kHz

#include <stdio.h>

int main() {
  for(int t=0;;t++) {
    putchar( (t*(t>>5|t>>8))>>(t>>16) );
  }
}
