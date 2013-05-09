
#include <iostream>

#include <client/view/window.h>
#include <client/controller/loop.h>

#include <common/model/world.h>

int main(int argc, char** argv) {

  // Try to initialize connection to server here
  try {
    //std::string address = argv[1];

  }
  catch(...) {
    //std::cout << "Failed to connect to server on address: " << address << std::endl;
    return 1;
  }

  WorldSharedPtr world = World::Create();
  WindowSharedPtr window = Window::Create();
  LoopSharedPtr loop = Loop::Create(world, window);

  loop->Start();

  return 0;
}

