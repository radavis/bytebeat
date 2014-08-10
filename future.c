// from: kb
// 8bit, 44.1kHz

#include <stdio.h>

int main() {
  for(int t=0;;t++) {
    putchar( ((t/2*(15&(0x234568a0>>(t>>8&28)))) | t/2 >>(t>>11)^t>>12) + (t/16&t&24) );
  }
}
