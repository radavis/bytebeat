// bytebeat

#include <stdio.h>

int main() {
  for(int i=0; 1; i++)
    putchar(i&i>>8);
}
