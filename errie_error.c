// from: stephth
// 8bit, 44.1kHz

#include <stdio.h>

int main() {
  for(int t=0;;t++) {
    // initial
  //putchar( (((t*9)&(t>>4))|(t*5&t>>7)|(t*3&t/1024)) );

    // percussive
  //putchar( (((t*9)&(t>>4))|(t*5&t>>7)|(t*3&t/1024))-1 );

    // magical
    putchar( (((t*9)&(t>>4))|(t*5&t>>7)|(t*3&t/1024)-1) );
  }
}
