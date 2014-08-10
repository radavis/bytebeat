#include <stdio.h>

int main() {
  for(int t=0;;t++) {
    putchar( t*(t>>8) );
  }
}
