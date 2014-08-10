// bytebeat

#include <stdio.h>

int main() {
  int i = 0;
  int value;

  while(1) {
    i++;
    value = i*(((i>>12)|(i>>8))&(63&(i>>4)));
    putchar(value);
  }
}
