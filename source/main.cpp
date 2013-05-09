

#include <iostream>

#include <view/gamewindow.h>

int main(int argc, char** argv) {

  GameWindowSharedPtr window = GameWindowSharedPtr::Create();

  std::cout << window->test << std::endl;

  return 0;
}


