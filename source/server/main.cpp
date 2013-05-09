
#include <iostream>

int main(int argc, char** argv) {

  try {
    std::cout << "Starting server." << std::endl;
  }
  catch(...) {
    return 1;
  }

  return 0;
}

