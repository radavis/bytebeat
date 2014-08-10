#include <stdio.h>

int main() {
  for(int t=0; 1; t++)
    putchar( t*(t>>9|t>>13) );
}
