// from: ryg
// 8bit, 44.1kHz

#include <stdio.h>

int main() {
  for(int t=0;;t++) {
    putchar( ((t*("36364689"[t>>13&7]&15))/12&128)+(((((t<<12)^(t>>12)-2)%11*t)/4|t>>13)%127) );
  }
}
