#include <keystroker.h>
#include <iostream>

int main() {
  char c = '\0';
  std::cout << "Hit any key. Press 'q' to quit" << std::endl;
  while (c != 'q') {
    c = keystroker::read_key();
    std::cout << "You pressed: " << c << std::endl;
  }
}