#include <keystroker.h>
#include <stdio.h>

int main() {
  char c = '\0';
  printf("Hit any key. Press 'q' to quit\n");
  while (c != 'q') {
    c = read_key();
    printf("You pressed: %c\n", c);
  }
}